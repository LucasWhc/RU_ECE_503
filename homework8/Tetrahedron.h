//
// Created by Lucas on 2019/10/26.
//

#ifndef HOMEWORK8_TETRAHEDRON_H
#define HOMEWORK8_TETRAHEDRON_H

#include "ThreeDimensionalShape.h"

class Tetrahedron : public ThreeDimensionalShape {
public:
    Tetrahedron();

    double getedge() const;

    void setedge(double);

    double getarea() const;

    double getvolumn() const;

    void print() const;

private:
    double edge;
};


#endif //HOMEWORK8_TETRAHEDRON_H
