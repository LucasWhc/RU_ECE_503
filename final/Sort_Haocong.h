//
// Created by Lucas on 11/22/2019.
//

#ifndef FINAL_SORT_HAOCONG_H
#define FINAL_SORT_HAOCONG_H


#include "StockAccount_Haocong.h"
#include <iostream>

class Sort {
public:
    Sort();

    virtual ~Sort();

    void Format(Linkedlist &);

private:
    virtual void sort(Linkedlist &list) = 0;
};

class bubbleSort : public Sort {
private:
    virtual void sort(Linkedlist &list);
};

class selectionSort : public Sort {
private:
    virtual void sort(Linkedlist &list);
};

//Use two methods to implement sort class
class strategySetup {
public:
    //enum the strategy type
    enum strategyType {
        Dummy, Bubble, Selection
    };

    strategySetup() {
        strategySort = NULL;
    };

    //Set and do sort operation
    void setSort(int);

    void doSort(Linkedlist &);

private:
    Sort *strategySort;
};


#endif //FINAL_SORT_HAOCONG_H
