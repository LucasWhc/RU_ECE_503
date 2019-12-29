//
// Created by Lucas on 11/22/2019.
//

#ifndef FINAL_TIMER_HAOCONG_H
#define FINAL_TIMER_HAOCONG_H


#include "Filer_Haocong.h"
#include <iostream>
#include <ctime>

class Timer {
public:
    //Constructor and destructor
    Timer();

    virtual ~Timer();

    //get date and time for transaction part
    string getDate() const;

    string getTime() const;

private:
    //convert int to string
    string Converter(int) const;

};


#endif //FINAL_TIMER_HAOCONG_H
