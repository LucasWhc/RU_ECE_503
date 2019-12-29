//
// Created by Lucas on 11/2/2019.
//

#ifndef HOMEWORK9_TWODAYPACKAGE_H
#define HOMEWORK9_TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : public Package {
public:
    TwoDayPackage(char *, char *, char *, char *, char *, char *, char *, char *, double= 0.0, double= 0.0,
                  double= 0.0);

    double getFlat1() const;

    void setFlat1(double);

    virtual double calculateCost() const;

    virtual void printForcost() const;

private:
    double Flat1;
};


#endif //HOMEWORK9_TWODAYPACKAGE_H
