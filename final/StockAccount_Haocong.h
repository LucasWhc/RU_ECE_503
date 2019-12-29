//
// Created by Lucas on 11/22/2019.
//

#ifndef FINAL_STOCKACCOUNT_HAOCONG_H
#define FINAL_STOCKACCOUNT_HAOCONG_H


#include "Account_Haocong.h"
#include "BankAccount_Haocong.h"
#include "LinkedList_Haocong.h"
#include "Sort_Haocong.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <sstream>

using namespace std;

class StockAccount : public Account {
    friend class strategySetup;

    friend class bubbleSort;

    friend class selectionSort;

public:
    //Constructor and destructor
    StockAccount();

    virtual ~StockAccount();

    //Convert double to string and set precision
    string Converter(double) const;

    //Check share
    string checkPrice(string) const;

    //Display the price of a stock
    void displayPrice(string) const;

    //Display the current portfolio
    void displayPortfolio();

    //Buy shares
    void buyShare(string, int, double, BankAccount &);

    //Sell shares
    void sellShare(string, int, double, BankAccount &);

    //Add shares to the transaction
    void changeShare(string, int, double, string);

    //Add transaction history
    void addHistory(string, int, double, double, string);

    //Download data from file to portfolio
    void downloadPortfolio();

    //Update data from portfolio to file
    void updatePortfolio();

    //Print stock transaction history
    void printHistory() const;

    void totalPortfolio();

    //Print the graph by MATLAB
    void printGraph();

    //Converter for time
    double converterTime(string) const;

private:
    Linkedlist list;
};


#endif //FINAL_STOCKACCOUNT_HAOCONG_H
