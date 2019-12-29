//
// Created by Lucas on 11/22/2019.
//

#include "Account_Haocong.h"

Account::Account() {}

Account::~Account() {}

//Get balance from previous balance file
double Account::getBalance() const {
    Filer filer;
    double balance;
    balance = stod(filer.getLast(BALANCE));
    return balance;
}

//Set new balance to the balance file
void Account::setBalance(double balance) {
    Filer filer;
    filer.Initial(BALANCE);
    filer.Add(BALANCE, to_string(balance));
}

//Print the history of transaction
void Account::History() const {
    printHistory();
}

//Initialize the balance every time the program starts
void Account::Initial() {
    Filer filer;
    if (filer.Check(BALANCE)) filer.initialBalance();
}