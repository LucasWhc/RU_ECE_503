//
// Created by Lucas on 11/2/2019.
//

#include "OvernightPackage.h"
#include <iostream>

using namespace std;

OvernightPackage::OvernightPackage(char *n1, char *a1, char *c1, char *z1, char *n2, char *a2, char *c2, char *z2, double w,
                                   double c, double f)
        : Package(n1, a1, c1, z1, n2, a2, c2, z2, w, c) {
    setFlat2(f);
}

double OvernightPackage::getFlat2() const {
    return Flat2;
}

void OvernightPackage::setFlat2(double flat2) {
    Flat2=flat2;
}

double OvernightPackage::calculateCost() const {
    return Package::calculateCost()+getWeight()*getFlat2();
}

void OvernightPackage::printForcost() const {
    cout << "\nWeight of package: " << getWeight() << " ounces" << endl;
    cout << "Type of delivery: Overnight Delivery" << endl;
    cout << "Cost of package: $" << calculateCost() << endl;
}