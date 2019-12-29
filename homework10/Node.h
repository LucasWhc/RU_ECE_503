//
// Created by Lucas on 11/9/2019.
//

#ifndef HOMEWORK10_NODE_H
#define HOMEWORK10_NODE_H

#include <string>

using namespace std;

class Node {
    friend class Linkedlist;

public:
    Node(string &, int);

    void setItemName(const string &);

    const string &getItemName() const;

    void setItemNum(int);

    int getItemNum() const;

private:
    string itemName;
    int itemNum;
    Node *next;
};


#endif //HOMEWORK10_NODE_H
