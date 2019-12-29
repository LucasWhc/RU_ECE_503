//
// Created by Lucas on 11/22/2019.
//

#include "Filer_Haocong.h"

Filer::Filer() {}

Filer::~Filer() {}

//Initialize the balance
void Filer::initialBalance() {
    ofstream of1;
    //Open BALANCE
    of1.open(BALANCE, ofstream::trunc | ofstream::out);
    if (of1.is_open() && !of1.fail()) {
        of1 << "10000.00";
        of1.close();
    } else cout << "Error! Cannot initialize the balance!" << endl;
}

//Initialize file
void Filer::Initial(const char *fileName) {
    ofstream of2;
    //Open a file
    of2.open(fileName, ofstream::trunc);
    if (of2.is_open() && !of2.fail()) of2.close();
    else cout << "Error! Cannot initialize the file!" << endl;
}

//Check if the file is initialized
bool Filer::Check(const char *fileName) const {
    ifstream if1;
    if1.open(fileName, ios_base::in);
    //Check if there is nothing to return
    if (if1.get() == EOF) {
        if1.close();
        return true;
    } else {
        if1.close();
        return false;
    }
}

//Add new elements to the last line
void Filer::Add(const char *fileName, string line) {
    ofstream of3;
    of3.open(fileName, of3.app);
    if (of3.is_open() && !of3.fail()) {
        of3 << line << '\n';
        of3.close();
    } else cout << "Error! Cannot open file!" << endl;
}

//Get data for the last line
string Filer::getLast(const char *fileName) const {
    string line;
    ifstream if2;
    if2.open(fileName, ios_base::in);
    if (if2.is_open() && !if2.fail()) {
        getline(if2, line);
        if2.close();
    } else cout << "Error! Cannot open file!" << endl;
    return line;
}

//Get all data, which is used for printing transaction
void Filer::getAll(const char *fileName) const {
    string line;
    ifstream if3;
    if3.open(fileName, ios_base::in);
    if (if3.is_open() && !if3.fail()) {
        while (getline(if3, line)) cout << line << endl;
        if3.close();
    } else cout << "Error! Cannot open file!" << endl;
}

//Get stock name or stock price from the line
string Filer::getData(string line, string dataType) const {
    //Change string data to int type
    int data = 0;
    if (dataType == "name") {
        data = 1;
    } else if (dataType == "price") {
        data = 2;
    } else {
        cout << " Error : Wrong Data Type " << endl;
        return "";
    }
    stringstream ss(line);
    string dataWord;
    int num = 0;
    // find the num-th data which uses '\t' seperated
    while (num != data && getline(ss, dataWord, '\t')) {
        num++;
    }
    return dataWord;
}

//Search the file to find out that file has the very stock
string Filer::searchName(const char *fileName, string keyword) const {
    string line;
    string word;
    ifstream if4;
    if4.open(fileName, ios_base::in);
    if (if4.is_open() && !if4.fail()) {
        while (getline(if4, line)) {
            if (getData(line, "name") == keyword) {
                word = getData(line, "price");
                if4.close();
                return word;
            }
        }
        cout << "Cannot find this stock!" << endl;
        if4.close();
        return "";
    }
    else {
        cout << "Error! Cannot open file!" << endl;
        return "";
    }
}