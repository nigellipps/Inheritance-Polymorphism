// Nigel Lipps
// CS 2, Section 140
// Assignment 4, Problem 1
// customer data .h file

#ifndef CustomerData_h
#define CustomerData_h
#include <iostream>
#include "PersonData.h"

class CustomerData: public PersonData {
public:
    //constructor
    CustomerData(int cn, bool ml);
    //accessors and mutators
    int getNumber() const;
    void setNumber(int num);
    bool getList() const;
    void setList(bool b);
private:
    int  customerNumber;
    bool mailingList;
};
#endif 
