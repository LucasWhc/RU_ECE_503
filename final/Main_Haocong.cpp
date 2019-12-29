/*
    Final Project by Haocong Wang
 */

#include <iostream>
#include "Account_Haocong.h"
#include "BankAccount_Haocong.h"
#include "StockAccount_Haocong.h"
#include "LinkedList_Haocong.h"
#include "Filer_Haocong.h"
#include "Timer_Haocong.h"
#include <string>

using namespace std;

//Show main menu
void showMainMenu();

//Show bank menu
void showBankMenu();

//Show stock menu
void showStockMenu();

//Operation for accounts
void stockAccount();

void bankAccount();

void Exit();

template<typename TYPE>
TYPE input();

//Create global objects
StockAccount stockaccount;
BankAccount bankaccount;
Account *account;
Filer filer;

int main() {
    int choice = 0;
    //Read the balance from the file when the program starts
    account->Initial();
    cout << "Welcome to the Account Management System!" << endl;
    while (choice != 3) {
        showMainMenu();
        cin >> choice;
        cin.clear();
        cin.ignore(1024, '\n');
        switch (choice) {
            //Stock account
            case 1: {
                stockaccount.downloadPortfolio();
                stockAccount();
                break;
            }
                //Bank account
            case 2: {
                bankAccount();
                break;
            }
                //Exit
            case 3: {
                Exit();
                break;
            }
            default: {
                cout << "Error! Invalid input!" << endl;
                break;
            }
        }
    }
    return 0;
}

//Show main menu
void showMainMenu() {
    cout << "Please select an account to access: " << endl;
    cout << "1. Stock Portfolio Account " << endl;
    cout << "2. Bank Account " << endl;
    cout << "3. Exit " << endl;
    cout << "Your option : ";
}

//Show bank menu
void showBankMenu() {
    cout << "Please select an option : " << endl;
    cout << "1. View account balance " << endl;
    cout << "2. Deposit money " << endl;
    cout << "3. Withdraw money " << endl;
    cout << "4. Print out history " << endl;
    cout << "5. Return to previous menu " << endl;
    cout << "Your option : ";
}

//Show stock menu
void showStockMenu() {
    cout << "Please select an option : " << endl;
    cout << "1. Display the price for a stock symbol " << endl;
    cout << "2. Display the current portfolio " << endl;
    cout << "3. Buy shares " << endl;
    cout << "4. Sell shares " << endl;
    cout << "5. View a graph for the portfolio value " << endl;
    cout << "6. View transaction history " << endl;
    cout << "7. Return to previous menu " << endl;
    cout << "Your option : ";
}

//Operation for accounts
void stockAccount() {
    string name;
    int num;
    double price;

    int choice = 0;
    cout << "Stock Portfolio Account" << endl;
    while (choice != 7) {
        showStockMenu();
        cin >> choice;
        cin.clear();
        cin.ignore(1024, '\n');
        switch (choice) {
            //Display the price for a stock symbol
            case 1: {
                cout << "Please enter the stock symbol :" << endl;
                getline(cin, name);
                stockaccount.displayPrice(name);
                break;
            }
                //Display the current portfolio
            case 2: {
                strategySetup sort;
                stockaccount.displayPortfolio();
                break;
            }
                //Buy shares
            case 3: {
                cout << "Please enter the stock symbol you wish to purchase : " << endl;
                getline(cin, name);
                cout << "Please enter the number of shares : " << endl;
                num = input<int>();
                cout << "Please enter the maximum amount you are willing to pay per share : " << endl;
                price = input<double>();
                stockaccount.buyShare(name, num, price, bankaccount);
                break;
            }
                //Sell shares
            case 4: {
                cout << "Please enter the stock symbol you wish to sell : " << endl;
                getline(cin, name);
                cout << " Please enter the number of shares : " << endl;
                num = input<int>();
                cout << "Please enter the minimum amount you are willing to sell per share : " << endl;
                price = input<double>();
                stockaccount.sellShare(name, num, price, bankaccount);
            }
                //View a graph for the portfolio value
            case 5: {
                break;
            }
                //View transaction history
            case 6: {
                stockaccount.printHistory();
                break;
            }
                //Return to previous menu
            case 7: {
                stockaccount.updatePortfolio();
                break;
            }
            default: {
                cout << "Error! Invalid input!" << endl;
                break;
            }
        }
    }
}

void bankAccount() {
    double money;
    int choice;
    cout << "Stock Portfolio Account" << endl;
    while (choice != 5) {
        showBankMenu();
        cin >> choice;
        cin.clear();
        cin.ignore(1024, '\n');
        switch (choice) {
            //View account balance
            case 1: {
                bankaccount.displayBalance();
                break;
            }
                //Deposit money
            case 2: {
                cout << "Please select the amount you wish to deposit : " << endl;
                money = input<double>();
                bankaccount.Deposit(money);
                break;
            }
                //Withdraw money
            case 3: {
                cout << " Please select the amount you wish to withdraw : " << endl;
                money = input<double>();
                bankaccount.Withdraw(money);
                break;
            }
                //Print out history
            case 4: {
                bankaccount.printHistory();
                break;
            }
                //Return to previous menu
            case 5: {
                break;
            }
            default: {
                cout << "Error! Invalid input!" << endl;
                break;
            }
        }
    }
}

void Exit() {
    stockaccount.totalPortfolio();
    cout << "See you!" << endl;
}

template<typename TYPE>
TYPE input() {
    TYPE input;
    cin >> input;
    cin.clear();
    cin.ignore(1024, '\n');
    while (input <= 0) {
        cout << " Invalid Input : Input needs to be positive " << endl;
        cin >> input;
        cin.clear();
        cin.ignore(1024, '\n');
    }
    return input;
}