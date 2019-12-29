//
// Created by Lucas on 11/9/2019.
//

#include "Linkedlist.h"
#include <iostream>
#include <iomanip>

using namespace std;

Linkedlist::Linkedlist() : first(0), last(0), mySize(0) {

}

int Linkedlist::size() const {
    int count = 0;
    Node *current = first;
    while (current != 0) {
        count++;
        current = current->next;
    }
    return count;
}

void Linkedlist::addToStart(Node *newNode) {
    mySize = size();
    if (mySize == 0) first = last = newNode;
    else {
        newNode->next = first;
        first = newNode;
    }
}

void Linkedlist::addToEnd(Node *newNode) {
    mySize = size();
    if (mySize == 0) first = last = newNode;
    else {
        last->next = newNode;
        last = newNode;
    }
}

void Linkedlist::printList() const {
    cout << "List" << endl;
    cout << left << setw(20) << "Item No." << "Item Name" << endl;
    Node *current = first;
    while (current != 0) {
        cout << left << setw(20) << current->getItemNum() << current->getItemName() << endl;
        current = current->next;
    }
}

bool Linkedlist::removeFromStart() {
    mySize = size();
    if (mySize == 0) return false;
    else {
        Node *temp = first;
        if (first == last) first = last = 0;
        else {
            first = first->next;
            delete temp;
        }
        return true;
    }
}

bool Linkedlist::removeFromEnd() {
    mySize = size();
    if (mySize == 0) return false;
    else {
        Node *temp = last;
        if (first == last) first = last = 0;
        else {
            Node *current = first;
            while (current->next != last) current = current->next;
            last = current;
            last->next = 0;
        }
        delete temp;
        return true;
    }
}

void Linkedlist::removeNodeFromListnumber(int Num) {
    mySize = size();
    if (mySize == 0) {
        cout << "Item not found!" << endl;
        return;
    }
    Node *current = first;
    if (first == last) {
        if (current->getItemNum() == Num) {
            Node *temp = first;
            first = last = 0;
            cout << "Removed!" << endl;
            delete temp;
            return;
        } else {
            cout << "Item not found!" << endl;
            return;
        }
    }
    while (current != 0) {
        if (current->next != 0 && current->next->getItemNum() == Num) {
            Node *temp = current->next;
            current->next = current->next->next;
            cout << "Removed!" << endl;
            delete temp;
            return;
        } else if (current->next == 0 && current->next->getItemNum() == Num) {
            Node *temp = last;
            last = current;
            current->next = 0;
            cout << "Removed!" << endl;
            delete temp;
            return;
        }
        current = current->next;
    }
    cout << "Item not found!" << endl;
}

void Linkedlist::removeNodeFromListname(string Name) {
    mySize = size();
    if (mySize == 0) {
        cout << "Item not found!" << endl;
        return;
    }
    Node *current = first;
    if (first == last) {
        if (current->getItemName() == Name) {
            Node *temp = first;
            first = last = 0;
            cout << "Removed!" << endl;
            delete temp;
            return;
        } else {
            cout << "Item not found!" << endl;
            return;
        }
    }
    while (current != 0) {
        if (current->next != 0 && current->next->getItemName() == Name) {
            Node *temp = current->next;
            current->next = current->next->next;
            cout << "Removed!" << endl;
            delete temp;
            return;
        } else if (current->next == 0 && current->next->getItemName() == Name) {
            Node *temp = last;
            last = current;
            current->next = 0;
            cout << "Removed!" << endl;
            delete temp;
            return;
        }
        current = current->next;
    }
    cout << "Item not found!" << endl;
}