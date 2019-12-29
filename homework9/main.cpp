// Haocong Wang 2019.11.02

#include <iostream>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

double packagePointer(const Package *, int);

int main() {
    //Use sum to contain the final total cost
    double sum = 0.0;

    //Set three different kinds of package
    Package package("John Smith", "1 Davidson Road", "Piscataway", "NJ 08854", "Tom Smith", "2 Davidson Road",
                    "Piscataway", "NJ 08854", 10.0, 0.5);
    TwoDayPackage twoDayPackage("Mary Smith", "3 Davidson Road", "Piscataway", "NJ 08854", "Jennifer Smith",
                                "4 Davidson Road", "Piscataway", "NJ 08854", 5.0, 0.5, 2.0);
    OvernightPackage overnightPackage("John Smith", "1 Davidson Road", "Piscataway", "NJ 08854", "Mary Smith",
                                      "3 Davidson Road", "Piscataway", "NJ 08854", 2.0, 0.5, 5.0);

    //Use a vector to contain three packages
    vector<Package *> ptr;
    ptr.push_back(&package);
    ptr.push_back(&twoDayPackage);
    ptr.push_back(&overnightPackage);

    cout << "Package delivery services program" << endl;
    cout << "\nCost per ounce for a package: $" << package.getCost() << "/ounce" << endl;
    cout << "Additional cost for two-day delivery: $" << twoDayPackage.getFlat1() << "/ounce" << endl;
    cout << "Additional cost for overnight delivery: $" << overnightPackage.getFlat2() << "/ounce" << endl;

    //Calculate the total cost and print it out
    for (int i = 0; i < ptr.size(); i++) {
        sum += packagePointer(ptr[i], i);
    }
    cout << "\nTotal cost of all the packages : $" << sum << endl;

    return 0;
}

double packagePointer(const Package *Ptr, int i) {
    cout << "\nPackage " << i + 1 << ":" << endl;
    Ptr->print();
    Ptr->printForcost();
    return Ptr->calculateCost();
}