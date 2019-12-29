//
// Created by Lucas on 11/22/2019.
//

#ifndef FINAL_ACCOUNT_HAOCONG_H
#define FINAL_ACCOUNT_HAOCONG_H


#include "Filer_Haocong.h"
#include "Timer_Haocong.h"

class Account {
public:
    //Constructor and destructor
    Account();

    virtual ~Account();

    //Print the history of transaction
    void History() const;

    //Initialize the balance every time the program starts
    void Initial();

protected:
    void setBalance(double);

    double getBalance() const;

private:
    virtual void printHistory() const = 0;
};


#endif //FINAL_ACCOUNT_HAOCONG_H
