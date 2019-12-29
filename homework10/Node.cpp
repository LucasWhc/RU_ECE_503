//
// Created by Lucas on 11/9/2019.
//

#include "Node.h"

Node::Node(string &name, int num) {
    itemName = name;
    itemNum = num;
    this->next = NULL;
}

void Node::setItemName(const string &Name) {
    itemName = Name;
}

const string &Node::getItemName() const {
    return itemName;
}

void Node::setItemNum(int Num) {
    itemNum = Num;
}

int Node::getItemNum() const {
    return itemNum;
}