//
// Created by Lucas on 11/2/2019.
//

#ifndef HOMEWORK9_OVERNIGHTPACKAGE_H
#define HOMEWORK9_OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package {
public:
    OvernightPackage(char *, char *, char *, char *, char *, char *, char *, char *, double= 0.0, double= 0.0,
                     double= 0.0);

    double getFlat2() const;

    void setFlat2(double);

    virtual double calculateCost() const;

    virtual void printForcost() const;

private:
    double Flat2;
};


#endif //HOMEWORK9_OVERNIGHTPACKAGE_H
