//
// Created by Lucas on 2019/10/26.
//

#include "Tetrahedron.h"
#include <iostream>
#include <cmath>

using namespace std;

Tetrahedron::Tetrahedron() {
    setedge(0.0);
}

double Tetrahedron::getedge() const {
    return edge;
}

void Tetrahedron::setedge(double edgein) {
    edge = edgein;
}

double Tetrahedron::getarea() const {
    return sqrt(3.0) * getedge() * getedge();
}

double Tetrahedron::getvolumn() const {
    return sqrt(2.0) / 12.0 * getedge() * getedge() * getedge();
}

void Tetrahedron::print() const {
    cout << "The tetrahedron with edge " << getedge() << " that is located at ";
    ThreeDimensionalShape::print3D();
    cout << " has:" << endl;
    cout << "Surface area of " << getarea() << endl;
    cout << "Volumn of " << getvolumn() << endl;
}