//
// Created by Lucas on 11/22/2019.
//

#include "BankAccount_Haocong.h"

BankAccount::BankAccount() {}

BankAccount::~BankAccount() {}

//Convert double to string and set precision
string BankAccount::Converter(double convertee) const {
    stringstream convert;
    convert << fixed << setprecision(2) << convertee;
    return convert.str();
}

//Display account balance
void BankAccount::displayBalance() const {
    cout << "Currently you have $" << setprecision(2) << getBalance() << " in your bank account." << endl;
}

//Operation for adding balance
void BankAccount::Deposit(double money) {
    double balance = getBalance();
    setBalance(money + balance);
    addHistory(money, "Deposit");
    displayBalance();
}

//Operation for withdraw
void BankAccount::Withdraw(double money) {
    double balance = getBalance();
    if (balance - money < 0) {
        cout << "Withdraw Failed! No enough money!" <<endl;
        return;
    }
    else {
        setBalance(balance - money);
        addHistory(money, "Withdraw");
        displayBalance();
    }
}

//Add deposit or withdraw history to the file
void BankAccount::addHistory(double money, string type) {
    Timer timer;
    Filer filer;
    stringstream line;
    string date = timer.getDate();
    line << left << setw(16) << type << left << setw(16) << "$" + Converter(money)
         << left << setw(16) << date << "$" + Converter(getBalance());
    filer.Add(BANK_HISTORY, line.str());
}

//Print bank transaction history
void BankAccount::printHistory() const {
    Filer filer;
    cout << left <<setw(16) << "Event" << left << setw(16) << "Amount"
         << left << setw(16) << "Date" << "Balance" << endl;
    filer.getAll(BANK_HISTORY);
    cout << endl;
}