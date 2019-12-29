//
// Created by Lucas on 11/22/2019.
//

#include "StockAccount_Haocong.h"

StockAccount::StockAccount() {}

StockAccount::~StockAccount() {}

//Convert double to string and set precision
string StockAccount::Converter(double convertee) const {
    stringstream convert;
    convert << fixed << setprecision(2) << convertee;
    return convert.str();
}

//Check share
string StockAccount::checkPrice(string keyword) const {
    Filer filer;
    string checker;
    //Randomly choose from two files
    int choice = rand() % 2 + 1;
    if (choice == 1) checker = filer.searchName(RESULT_1, keyword);
    else if (choice == 2) checker = filer.searchName(RESULT_2, keyword);
    return checker;
}

//Display the price of a stock
void StockAccount::displayPrice(string keyword) const {
    Filer filer;
    string display;
    display = checkPrice(keyword);
    if (!display.empty()) {
        cout << left << setw(8) << "Symbol" << "Price per share" << endl;
        cout << left << setw(8) << keyword << fixed << setprecision(2) << display << endl;
    }
}

//Display the current portfolio
void StockAccount::displayPortfolio() {
    strategySetup sort;
    //Choose one sort method
    strategySetup strategy;
    int choice = 0;
    cout << "Please enter: Exit(0), Bubble(1), Selection(2)" << endl;
    cin >> choice;
    cin.clear();
    cin.ignore(1024, '\n');
    while (choice < 0 || choice > 2) {
        cout << "Error! Please inpur again: " << endl;
        cin >> choice;
        cin.clear();
        cin.ignore(1024, '\n');
    }
    strategy.setSort(choice);
    sort = strategy;
    sort.doSort(list);
    //Print the portfolio to the user
    double total = 0.0;
    cout << "Cash balance = $" << fixed << setprecision(2) << getBalance() << endl;
    cout << left << setw(15) << "CompanySymbol"
         << left << setw(8) << "Number"
         << left << setw(15) << "PricePerShare" << "TotalValue" << endl;
    total = list.printList();
    cout << "Total portfolio value: $" << fixed << setprecision(2) << total + getBalance() << endl;
}

//Buy shares
void StockAccount::buyShare(string name, int num, double priceWilling, class BankAccount &bankaccount) {
    Filer filer;
    const char* file;
    //Randomly choose one file
    int choice = rand() % 2 + 1;
    if (choice == 1) file = RESULT_1;
    else if (choice == 2) file = RESULT_2;
    //Get price from the file
    double price = 0.0;
    if (filer.searchName(file, name) != "") price = stod(filer.searchName(file, name));
    else {
        cout << "Error! Cannot find this stock!" <<endl;
        return;
    }
    //Check if the price is higher than the expected price
    if (price > priceWilling) {
        cout << "Transaction failed! The price is higher than you expect!" << endl;
        return;
    }
    //Check if the user has enough balance
    double cost = num * price * 1.0;
    double balance = getBalance();
    if (cost > balance) {
        cout << "Transaction failed! You don't have enough money!" << endl;
        return;
    }
    //Buy shares, change the balance and add history to both accounts
    setBalance(balance - cost);
    changeShare(name, num, price, "Buy");
    bankaccount.addHistory(cost, "BuyStock");
    addHistory(name, num, price, cost, "Buy");
    cout << "You have purchased " << num << " shares of " << name << " at $"
         << fixed << setprecision(2) << price << " each for a total of $"
         << fixed << setprecision(2) << cost << endl;
}

//Sell shares
void StockAccount::sellShare(string name, int numwilling, double pricewilling, class BankAccount &bankaccount) {
    Filer filer;
    const char* file;
    //Randomly choose one file
    int choice = rand() % 2 + 1;
    if (choice == 1) file = RESULT_1;
    else if (choice == 2) file = RESULT_2;
    Node *share = list.Find(name);
    //Check if the user has the stock
    if (share == nullptr) {
        cout << "Transaction failed! You don't have this stock!" <<endl;
        return;
    }
    //Check if the user has enough shares
    int num = share->getSharenumber();
    if (num < numwilling) {
        cout << "Transaction failed! You don't have enough shares!" << endl;
        return;
    }
    //Get price from the file
    double price = 0.0;
    if (filer.searchName(file, name) != "") price = stod(filer.searchName(file, name));
    else {
        cout << "Error! Please check the price!" << endl;
        return;
    }
    //Check if the price is lower than expected price
    if (price < pricewilling) {
        cout << "Transaction failed! The price is lower than you expected!" << endl;
        return;
    }
    //Sell shares, change the balance and add history to both accounts
    double earn = numwilling * price * 1.0;
    double balance = getBalance();
    changeShare(name, pricewilling, price, "Sell");
    setBalance(balance + earn);
    bankaccount.addHistory(earn, "SellStock");
    addHistory(name, numwilling, price, earn, "Sell");
    cout << "You have sold " << numwilling << " Shares of " << name << " at $"
         << fixed << setprecision(2) << price << " each for a total of $"
         << fixed << setprecision(2) << earn << endl;
}

//Add shares to the transaction
void StockAccount::changeShare(string name, int num, double price, string type) {
    Node *node = list.Find(name);
    //Check the kind of operation
    if (type == "Buy") {
        //Check if the stock has existed
        if (node == nullptr) {
            node = new Node(name, num);
            node->setPrice(price);
            list.Add(node);
        }
        else node->setShareNumber(node->getSharenumber() + num);
    }
    else if (type == "Sell") {
        //After the transaction, if there's no same stock, remove the node
        if (node->getSharenumber() == num) list.Remove(name);
        else node->setShareNumber(node->getSharenumber() - num);
    }
}

//Add transaction history
void StockAccount::addHistory(string name, int num, double price, double value, string type) {
    Timer timer;
    Filer filer;
    stringstream line;
    string time = timer.getTime();
    line << left << setw(16) << type << setw(16) << name << left << setw(16) << to_string(num) << left
         << setw(16) << Converter(price) << left << setw(16) << Converter(value) << left << setw(16) <<time;
    filer.Add(STOCK_HISTORY, line.str());
}

//Download data from file to portfolio
void StockAccount::downloadPortfolio() {
    Filer filer;
    string line, name;
    int num = 0;
    ifstream ifs;
    ifs.open(STOCK, ios_base::in);
    if (ifs.is_open() && !ifs.fail()) {
        while (getline(ifs, line)) {
            name = filer.getData(line, "name");
            num = stoi(filer.getData(line, "price"));
            Node *node = new Node(name, num);
            list.Add(node);
        }
    }
    else cout << "Error! Cannot open file!" << endl;
}

//Update data from portfolio to file
void StockAccount::updatePortfolio() {
    Filer filer;
    string name, num;
    ofstream ofs;
    ofs.open(STOCK, ofstream::trunc | ofstream::out);
    if (ofs.is_open() && !ofs.fail()) {
        Node *current = list.getFirst()->getNext();
        while (current != list.getLast()) {
            name = current->getStockSymbol();
            num = to_string(current->getSharenumber());
            ofs << name << '\t' << num << '\n';
            current = current->getNext();
        }
        ofs.close();
    }
    else cout << "Error! Cannot initialize file!" << endl;
}

//Print stock transaction history
void StockAccount::printHistory() const {
    Filer filer;
    cout << left << setw(16) << "Event" << left << setw(16) << "CompSymbol"
         << left << setw(16) << "Number" << left << setw(16) << "PricePerShare" << left << setw(16)
         << left << setw(16) << "TotalValue" << "Time" << endl;
    filer.getAll(STOCK_HISTORY);
}

//Calculate the total value of portfolio
void StockAccount::totalPortfolio() {
    Filer filer;
    Timer timer;
    string date = timer.getDate();
    string time = timer.getTime();
    Node *current = list.getFirst()->getNext();
    double totalValue = 0.0;
    while (current != list.getLast()) {
        current->searchPrice();
        totalValue += list.getValue(current);
        current = current->getNext();
    }
    double total = totalValue + getBalance();
    stringstream line;
    line << Converter(total) << '\t' << time << '\t' << date;
    filer.Add(PORTFOLIO, line.str());
}