//
// Created by Lucas on 11/22/2019.
//

#include "Sort_Haocong.h"

Sort::Sort() {}

Sort::~Sort() {}

void Sort::Format(class Linkedlist &list) {
    sort(list);
}

void bubbleSort::sort(Linkedlist &list) {
    cout << "Bubble sort!" << endl;
    for (int i = 1; i < list.getLength(); i++) {
        list.iteratorWithCompare(1);
    }
}

void selectionSort::sort(Linkedlist &list) {
    cout << "Selection sort!" << endl;
    for (int i = 1; i < list.getLength(); i++) {
        int max = 0;
        max = list.iteratorForMaxValue(i);
        if (max > i) list.Swap(i, max);
    }
}

void strategySetup::setSort(int type) {
    delete strategySort;
    if (type == Bubble) strategySort = new bubbleSort();
    else if (type == Selection) strategySort = new selectionSort();
    //If the user don't choose the right type, set bubble sort as the default
    else strategySort = new bubbleSort();
}

void strategySetup::doSort(class Linkedlist &list) {
    strategySort->Format(list);
}