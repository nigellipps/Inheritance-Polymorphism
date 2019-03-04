// Nigel Lipps
// customer data .cpp file

#include <stdio.h>
#include "CustomerData.h"

CustomerData::CustomerData(int cn, bool ml){
    customerNumber = cn;
    mailingList = ml;
    setLast("Thornberry");
    setFirst("Nigel");
    setAddress("12345 Wood St.");
    setCity("Forest Park");
    setState("CA");
    setZip(90124);
    setPhone(3105432817);
}

int CustomerData::getNumber() const{
    return customerNumber;
}

void CustomerData::setNumber(int cn){
    customerNumber = cn;
}

bool CustomerData::getList() const{
    return mailingList;
}

void CustomerData::setList(bool ml){
    mailingList = ml;
}
