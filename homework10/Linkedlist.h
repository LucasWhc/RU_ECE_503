//
// Created by Lucas on 11/9/2019.
//

#ifndef HOMEWORK10_LINKEDLIST_H
#define HOMEWORK10_LINKEDLIST_H

#include <string>
#include "Node.h"

using namespace std;

class Linkedlist {
public:
    Linkedlist();

    int size() const;

    void addToStart(Node *);

    void addToEnd(Node *);

    void printList() const;

    bool removeFromStart();

    bool removeFromEnd();

    void removeNodeFromListnumber(int);

    void removeNodeFromListname(string);

private:
    Node *first;
    Node *last;
    int mySize;

};


#endif //HOMEWORK10_LINKEDLIST_H
