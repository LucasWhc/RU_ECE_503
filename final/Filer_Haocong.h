//
// Created by Lucas on 11/22/2019.
//

#ifndef FINAL_FILER_HAOCONG_H
#define FINAL_FILER_HAOCONG_H


#include "LinkedList_Haocong.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define RESULT_1 "E:/Program Files (x86)/cpp/final/Filer/Result_1.txt"
#define RESULT_2 "E:/Program Files (x86)/cpp/final/Filer/Result_2.txt"
#define BALANCE "E:/Program Files (x86)/cpp/final/Filer/Balance.txt"
#define STOCK_HISTORY "E:/Program Files (x86)/cpp/final/Filer/Stock_history.txt"
#define BANK_HISTORY "E:/Program Files (x86)/cpp/final/Filer/Bank_history.txt"
#define STOCK "E:/Program Files (x86)/cpp/final/Filer/Stock.txt"
#define PORTFOLIO "E:/Program Files (x86)/cpp/final/Filer/Portfolio.txt"

class Filer {
public:
    //Constructor and destructor
    Filer();

    virtual ~Filer();

    //Initialize the balance
    void initialBalance();

    //Initialize file
    void Initial(const char *);

    //Check if the file is initialized
    bool Check(const char *) const;

    //Add new elements to the last line
    void Add(const char *, string);

    //Get data for the last line
    string getLast(const char *) const;

    //Get all data, which is used for printing transaction
    void getAll(const char *) const;

    //Search the file to find out that file has the very stock
    string searchName(const char *, string) const;

    //Get stock name and stock price from the line
    string getData(string, string) const;
};


#endif //FINAL_FILER_HAOCONG_H
