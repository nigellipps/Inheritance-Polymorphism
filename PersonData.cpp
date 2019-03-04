// Nigel Lipps
// perosn data .cpp file

#include <stdio.h>
#include <string>
#include "PersonData.h"
using namespace std;

//this is my constructor
PersonData::PersonData(string f, string l, string a,
                       string c, string s, int z, long int p){
    first = f;
    last = l;
    address = a;
    city = c;
    state = s;
    zip = z;
    phone = p;
}

//these are my mutator and accessor functions
PersonData::PersonData(){
}

PersonData::~PersonData(){
}

string PersonData::getLast() const{
    return last;
}

void PersonData::setLast(string l){
    last = l;
};

string PersonData::getFirst() const{
    return first;
};

void PersonData::setFirst(string f){
    first = f;
};

string PersonData::getAddress() const{
    return address;
};

void PersonData::setAddress(string a){
    address = a;
};

string PersonData::getCity() const{
    return city;
};

void PersonData::setCity(string c){
    city = c;
};

string PersonData::getState() const{
    return state;
};

void PersonData::setState(string s){
    state = s;
};

int PersonData::getZip() const{
    return zip;
};

void PersonData::setZip(int z){
    zip = z;
};

long int PersonData::getPhone() const{
    return phone;
};

void PersonData::setPhone(long int p){
    phone = p;
};
//this is the end of them
