//
// Created by Lucas on 2019/10/26.
//

#ifndef HOMEWORK8_CIRCLE_H
#define HOMEWORK8_CIRCLE_H

#include "TwoDimensionalShape.h"

class Circle : public TwoDimensionalShape {
public:
    Circle();

    double getr() const;

    void setr(double);

    double getarea() const;

    void print() const;

private:
    double r;
};


#endif //HOMEWORK8_CIRCLE_H
