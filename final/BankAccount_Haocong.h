//
// Created by Lucas on 11/22/2019.
//

#ifndef FINAL_BANKACCOUNT_HAOCONG_H
#define FINAL_BANKACCOUNT_HAOCONG_H


#include "Account_Haocong.h"
#include <iostream>

class BankAccount : public Account {
public:
    //Constructor and dectructor
    BankAccount();

    virtual ~BankAccount();

    //Convert double to string and set precision
    string Converter(double) const;

    //Display account balance
    void displayBalance() const;

    //operation for adding balance
    void Deposit(double);

    //operation for withdraw
    void Withdraw(double);

    //add deposit or withdraw history to the file
    void addHistory(double, string);

    //print bank transaction history
    void printHistory() const;
};


#endif //FINAL_BANKACCOUNT_HAOCONG_H
