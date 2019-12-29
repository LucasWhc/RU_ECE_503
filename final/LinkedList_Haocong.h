//
// Created by Lucas on 11/22/2019.
//

#ifndef FINAL_LINKEDLIST_HAOCONG_H
#define FINAL_LINKEDLIST_HAOCONG_H


#include "Node_Haocong.h"
#include <iostream>
#include <iomanip>
#include <cfloat>

using namespace std;

class Linkedlist {
public:
    //constructor and destructor
    Linkedlist();

    virtual ~Linkedlist();

    int getLength() const;

    void Add(Node *);

    Node *Find(string) const;

    void Remove(string);

    Node *findPosition(int) const;

    void Swap(int, int) const;

    double printList() const;

    //Get the total value for each stock
    double getValue(Node *) const;

    //Iterate the list for Selection sort
    int iteratorForMaxValue(int position);

    //Compare and iterate the list for Bubble sort
    void iteratorWithCompare(int position);

    Node *getFirst() const;

    Node *getLast() const;

private:

    Node *first;
    Node *last;
    int length;
};


#endif //FINAL_LINKEDLIST_HAOCONG_H
