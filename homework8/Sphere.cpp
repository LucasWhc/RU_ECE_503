//
// Created by Lucas on 2019/10/26.
//

#include "Sphere.h"
#include <iostream>

using namespace std;

Sphere::Sphere() {
    setr(0.0);
}

double Sphere::getr() const {
    return r;
}

void Sphere::setr(double rin) {
    r = rin;
}

double Sphere::getarea() const {
    return 4.0 * 3.14159 * getr() * getr();
}

double Sphere::getvolumn() const {
    return 4.0 / 3.0 * 3.14159 * getr() * getr() * getr();
}

void Sphere::print() const {
    cout << "The sphere with radius " << getr() << " that is located at";
    ThreeDimensionalShape::print3D();
    cout << " has" << endl;
    cout << "Surface area of " << getarea() << endl;
    cout << "Volumn of " << getvolumn() << endl;
}