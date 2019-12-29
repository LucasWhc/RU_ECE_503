//
// Created by Lucas on 11/2/2019.
//

#include "TwoDayPackage.h"
#include <iostream>

using namespace std;

TwoDayPackage::TwoDayPackage(char *n1, char *a1, char *c1, char *z1, char *n2, char *a2, char *c2, char *z2, double w,
                             double c, double f)
        : Package(n1, a1, c1, z1, n2, a2, c2, z2, w, c) {
    setFlat1(f);
}

double TwoDayPackage::getFlat1() const {
    return Flat1;
}

void TwoDayPackage::setFlat1(double flat1) {
    Flat1=flat1>=0.0?flat1:0.0;
}

double TwoDayPackage::calculateCost() const {
    return Package::calculateCost()+getWeight()*getFlat1();
}

void TwoDayPackage::printForcost() const {
    cout << "\nWeight of package: " << getWeight() << " ounces" << endl;
    cout << "Type of delivery: Two Day Delivery" << endl;
    cout << "Cost of package: $" << calculateCost() << endl;
}