//
// Created by Lucas on 2019/10/26.
//

#ifndef HOMEWORK8_TRIANGLE_H
#define HOMEWORK8_TRIANGLE_H

#include "TwoDimensionalShape.h"

class Triangle : public TwoDimensionalShape {
public:
    Triangle();

    double getedge() const;

    void setedge(double);

    double getarea() const;

    void print() const;

private:
    double edge;
};


#endif //HOMEWORK8_TRIANGLE_H
