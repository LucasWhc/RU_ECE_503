//
// Created by Lucas on 11/22/2019.
//

#ifndef FINAL_NODE_HAOCONG_H
#define FINAL_NODE_HAOCONG_H


#define RESULT_1 "E:/Program Files (x86)/cpp/final/Filer/Result_1.txt"
#define RESULT_2 "E:/Program Files (x86)/cpp/final/Filer/Result_2.txt"

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

class Node {
    friend class Linkedlist;

    friend class bubbleSort;

    friend class selectionSort;

    friend class strategySetup;

public:
    //Concstrutor and destructor
    Node(string stock, int num)
            : stockSymbol(stock), shareNumber(num) {
        this->next = NULL;
        this->pre = NULL;
    }

    virtual ~Node() {}

    const string &getStockSymbol() const {
        return stockSymbol;
    }

    void setStockSymbol(const string &stocksymbol) {
        Node::stockSymbol = stocksymbol;
    }

    int getSharenumber() const {
        return shareNumber;
    }

    void setShareNumber(int sharenumber) {
        Node::shareNumber = sharenumber;
    }


    //Get price from the file
    double getPrice() const {
        return price;
    }

    void setPrice(double price) {
        Node::price = price;
    }

    Node *getNext() const {
        return next;
    }

    string getData(string line, string dataType) {
        int data = 0;
        if (dataType == "name") data = 1;
        else if (dataType == "price") data = 2;
        else {
            cout << "Error!" << endl;
            return "";
        }
        stringstream ss(line);
        string dataWord;
        int num = 0;
        while (num != data && getline(ss, dataWord, '\t')) num++;
        return dataWord;
    }

    //Search the price
    void searchPrice() {
        string file;
        double price = 0.0;
        int choice = rand() % 2 + 1;

        if (choice == 1) file = RESULT_1;
        else file = RESULT_2;

        string line;
        string word = "";
        ifstream ifs;
        ifs.open(file, ios_base::in);
        if (ifs.is_open() && !ifs.fail()) {
            while (getline(ifs, line)) {
                if (getData(line, "name") == this->getStockSymbol()) {
                    word = getData(line, "price");
                    ifs.close();
                    break;
                }
            }
            if (!word.empty()) {
                price = stod(word);
                this->setPrice(price);
            } else {
                this->setPrice(price);
                cout << " Can't find the stock symbol! " << endl;
                ifs.close();
            }
        } else cout << "Error! Cannot open file!" << endl;
    }

private:
    string stockSymbol;
    int shareNumber;
    double price;
    Node *next;
    Node *pre;
};

#endif //FINAL_NODE_HAOCONG_H
