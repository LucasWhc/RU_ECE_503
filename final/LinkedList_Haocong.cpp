//
// Created by Lucas on 11/22/2019.
//

#include "LinkedList_Haocong.h"

//Constructor and destructor
Linkedlist::Linkedlist() {
    length = 0;
    first = new Node("", 0);
    last = new Node("", 0);
    first->pre = NULL;
    first->next = last;
    last->pre = first;
    last->next = NULL;
}

Linkedlist::~Linkedlist() {
    if (length != 0) {
        Node *current = first;
        Node *temp;
        while (current != 0) {
            temp = current;
            current = current->next;
            delete temp;
        }
    }
}

//Get length
int Linkedlist::getLength() const {
    return length;
}

//Add a new node
void Linkedlist::Add(class Node *node) {
    node->next = last;
    last->pre->next = node;
    node->pre = last->pre;
    last->pre = node;
    length++;
}

//Find a node by the stock name
class Node *Linkedlist::Find(string stocksymbol) const {
    Node *current = first->next;
    while (current != last) {
        if (current->getStockSymbol() == stocksymbol) return current;
        current = current->next;
    }
    //If there no stock found, return nullptr
    return nullptr;
}

//Remove a node by the stock name
void Linkedlist::Remove(string stocksymbol) {
    Node *node = Find(stocksymbol);
    if (node != nullptr) {
        node->next->pre = node->pre;
        node->pre->next = node->next;
        delete (node);
        length--;
    } else cout << "Error! Cannot find this stock!" << endl;
}

//Find the position of one stock
class Node *Linkedlist::findPosition(int pos) const {
    if (getLength() >= pos) {
        Node *temp = first->next;
        int cnt = 1;
        while (cnt != pos) {
            temp = temp->next;
            cnt++;
        }
        return temp;
    } else return nullptr;
}

//Swap two nodes
void Linkedlist::Swap(int pos1, int pos2) const {
    Node *node1 = findPosition(pos1);
    Node *node2 = findPosition(pos2);
    if (node1 == nullptr || node2 == nullptr) {
        cout << "Error! Please check the stocks!" << endl;
        return;
    } else {
        //Check if the two nodes are neighbour
        if (node1->next == node2) {
            node1->pre->next = node2;
            node2->pre = node1->pre;
            node2->next->pre = node1;
            node1->next = node2->next;
            node2->next = node1;
            node1->pre = node2;
        } else if (node1->pre == node2) {
            node2->pre->next = node1;
            node1->pre = node2->pre;
            node1->next->pre = node2;
            node2->next = node1->next;
            node1->next = node2;
            node2->pre = node1;
        }
            //If they are not neighbour, use a temp to do swap
        else {
            Node *temp = new Node("", 0);
            temp->pre = node1->pre;
            temp->next = node1->next;
            node1->pre->next = node2;
            node1->next->pre = node2;
            node1->pre = node2->pre;
            node1->next = node2->next;
            node2->pre->next = node1;
            node2->next->pre = node1;
            node2->pre = temp->pre;
            node2->next = temp->next;
            delete (temp);
        }
    }
}

//Print the portfolio and return the total value
double Linkedlist::printList() const {
    Node *current = first->next;
    double total = 0.0;
    while (current != last) {
        current->searchPrice();
        cout << left << setw(15) << current->getStockSymbol()
             << left << setw(8) << current->getSharenumber()
             << left << setw(15) << fixed << setprecision(2) << current->getPrice()
             << fixed << setprecision(2) << getValue(current) << endl;
        total += getValue(current);
        current = current->next;
    }
    return total;
}

//Get the total value for each stock
double Linkedlist::getValue(class Node *node) const {
    return node->getPrice() * node->getSharenumber();
}

//Iterate the list for Selection sort
int Linkedlist::iteratorForMaxValue(int position) {
    int ans = 0;
    double max = DBL_MIN;
    int pos = 1;
    Node *current = first->next;
    //Move to the input position
    while (pos < position) {
        current = current->next;
        pos++;
    }
    //Iterate the rest values
    double total;
    while (current != last) {
        current->searchPrice();
        total = current->getSharenumber() * current->getPrice();
        if (max < total) {
            max = total;
            ans = pos;
        }
        current = current->next;
        pos++;
    }
    return ans;
}

//Compare and iterate the list for Bubble sort
void Linkedlist::iteratorWithCompare(int position) {
    int pos = 1;
    Node *current = first->next;
    //Move to the input position
    while (pos < position) {
        current = current->next;
        pos++;
    }
    //Iterate the rest values
    double total1, total2;
    current->searchPrice();
    while (current->next != last) {
        current->next->searchPrice();
        total1 = current->getSharenumber() * current->getPrice();
        total2 = current->next->getSharenumber() * current->next->getPrice();
        if (total1 < total2) Swap(pos, pos + 1);
        pos++;
        current = findPosition(pos);
    }
}

class Node *Linkedlist::getFirst() const {
    return first;
}

class Node *Linkedlist::getLast() const {
    return last;
}