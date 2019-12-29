//
// Created by Lucas on 2019/10/26.
//

#ifndef HOMEWORK8_SPHERE_H
#define HOMEWORK8_SPHERE_H

#include "ThreeDimensionalShape.h"

class Sphere : public ThreeDimensionalShape {
public:
    Sphere();

    double getr() const;

    void setr(double);

    double getarea() const;

    double getvolumn() const;

    void print() const;

private:
    double r;
};


#endif //HOMEWORK8_SPHERE_H
