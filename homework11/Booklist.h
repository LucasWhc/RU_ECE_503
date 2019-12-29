//
// Created by Lucas on 11/15/2019.
//

#ifndef HOMEWORK11_BOOKLIST_H
#define HOMEWORK11_BOOKLIST_H

#include <iostream>
#include <cstring>

using namespace std;

template<class T>
class Booklist {
public:
    bool sorted;

    Booklist() {
        memset(booklist, 0, sizeof(booklist));
        numbers = pos = 0;
        sorted = false;
    }

    T Input() {
        T book;
        cout << "Please enter your book: " << endl;
        cin >> book;
        return book;
    }

    void Print() {
        cout << "Your list is:" << endl;
        for (int i = 0; i < numbers; i++) {
            cout << i + 1 << ". " << booklist[i] << endl;
        }
    }

    bool List_full() {
        if (numbers == 20) {
            cout << "The booklist is full!" << endl;
            return true;
        }
        return false;
    }

    bool List_empty() {
        if (numbers == 0) {
            cout << "The list is empty!" << endl;
            return true;
        }
        return false;
    }

    int Judge_pos_add() {
        cout << "Please choose the position: (from 1 to " << numbers + 1 << ")" << endl;
        cin >> pos;
        //Judge if the position is in the array
        while (pos <= 0 || pos > numbers + 1) {
            cout << "Error! Please input again: ";
            cin >> pos;
            cout << endl;
        }
        return pos;
    }

    int Judge_pos_delete() {
        cout << "Please choose the position: (from 1 to " << numbers << ")" << endl;
        cin >> pos;
        //Judge if the position is in the array
        while (pos <= 0 || pos > numbers) {
            cout << "Error! Please input again: ";
            cin >> pos;
            cout << endl;
        }
        return pos;
    }

    void Add_end(T &new_book) {
        numbers++;
        *(booklist + numbers - 1) = new_book;
    }

    void Add_pos(T &new_book, int position) {
        numbers++;
        for (int i = numbers - 1; i >= position; i--) {
            booklist[i] = *(booklist + i - 1);
        }
        *(booklist + position - 1) = new_book;
    }

    int Find_linear(T &book) {
        for (int i = 0; i < numbers; i++) {
            if (booklist[i] == book) {
                return i + 1;
            }
        }
        return -1;
    }

    int Find_binary(T &book) {
        int low = 0;
        int high = numbers - 1;
        int mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (*(booklist + mid) == book) {
                return mid + 1;
            } else if (book < *(booklist + mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }

    void Delete_pos(int position) {
        numbers--;
        for (int i = position - 1; i < numbers; i++) {
            booklist[i] = booklist[i + 1];
        }
    }

    int Delete_item(T &book) {
        for (int i = 0; i < numbers; i++) {
            if (booklist[i] == book) {
                numbers--;
                for (int j = i; j < numbers; j++) {
                    *(booklist + j) = booklist[j + 1];
                }
                cout << "Delete successfully" << endl;
                return numbers;
            }
        }
        return numbers;
    }

    void Sort_selection() {
        T smallest;
        for (int i = 0; i < numbers - 1; i++) {
            smallest = *(booklist + i);
            for (int j = i + 1; j < numbers; j++) {
                if (*(booklist + j) < smallest) {
                    smallest = *(booklist + j);
                    *(booklist + j) = *(booklist + i);
                    *(booklist + i) = smallest;
                }
            }
        }
    }

    void Sort_bubble() {
        for (int i = 0; i < numbers - 1; i++) {
            for (int j = 0; j < numbers - 1 - i; j++) {
                if (*(booklist + j) > *(booklist + j + 1)) {
                    swap(booklist[j], booklist[j + 1]);
                }
            }
        }
    }

private:
    int pos;
    int numbers;
    T booklist[20];
};

#endif //HOMEWORK11_BOOKLIST_H
