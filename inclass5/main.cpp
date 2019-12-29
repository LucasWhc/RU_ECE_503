//Haocong Wang 2-10.10.19
//Main function for class IntegerSet

#include <iostream>
#include "IntegerSet.h"

using namespace std;

int main() {
    IntegerSet a;
    IntegerSet b;
    IntegerSet c;
    IntegerSet d;

    //Input element to set A and show it to user
    cout << "Enter set A:\n";
    a.inputSet();
    cout << "\nSet A is:\n";
    a.printSet();

    //Input element to set B and show it to user
    cout << "\nEnter set B:\n";
    b.inputSet();
    cout << "\nSet B is:\n";
    b.printSet();

    //Set C is the union of set A and B
    c=a.UnionOfSets(b);
    cout << "\nUnion of A and B is:\n";
    c.printSet();

    //Set D is the intersection of set A and B
    d=a.IntersectionOfSets(b);
    cout << "\nIntersection of A and B is:\n";
    d.printSet();

    return 0;
}