//Haocong Wang 2019.10.19
//Cpp file for class IntegerSet

#include "IntegerSet.h"
#include <iostream>
#include <iomanip>

using namespace std;

// constructor
IntegerSet::IntegerSet() {
    for (int i = 0; i < 101; i++) {
        set[i] = 0;
    }
} // end IntegerSet constructor

// input a set from the user
void IntegerSet::inputSet() {
    int number;
    do {
        cout << "Enter an element (-1 to end): ";
        cin >> number;

        if (validEntry(number))
            set[number] = 1;
        else if (number != -1)
            cout << "Invalid Element\n";
    } while (number != -1); // end do...while

    cout << "Entry complete\n";
} // end function inputSet

// prints the set to the output stream
void IntegerSet::printSet() const {
    cout << "{ ";
    for (int u = 0; u < 101; u++)
        if (set[u]) cout << u << " ";

    cout << "}" << endl;
} // end function printSet

//definition of UnionOfSets
IntegerSet IntegerSet::UnionOfSets(IntegerSet b) {
    IntegerSet c;
    for (int u = 0; u < 101; u++) {
        c.set[u] = set[u] | b.set[u];
    }
    return c;
}//end function UnionOfSets

IntegerSet IntegerSet::IntersectionOfSets(IntegerSet b) {
    IntegerSet d;
    for (int u = 0; u < 101; u++) {
        d.set[u] = set[u] & b.set[u];
    }
    return d;
}//end function IntersectionOfSets