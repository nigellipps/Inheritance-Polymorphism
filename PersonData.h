// Nigel Lipps
// CS 2, Section 140
// Assignment 4, Problem 1
// person data .h file

#ifndef PersonData_h
#define PersonData_h

#include <string>
#include <iostream>
class PersonData{
public:
    //Constructors/Destructor
    PersonData(std::string f,std::string l,std::string a,std::string c,
               std::string s,int z,long int p);
    PersonData();
    virtual ~PersonData();
    //Accessors and mutators
    std::string getLast() const;
    std::string getFirst() const;
    std::string getAddress() const;
    std::string getCity() const;
    std::string getState() const;
    int getZip() const;
    long int getPhone() const;
    void setLast(std::string l);
    void setFirst(std::string f);
    void setAddress(std::string a);
    void setCity(std::string c);
    void setState(std::string s);
    void setZip(int z);
    void setPhone(long int p);
    //all the variables in this class
private:
    std::string last;
    std::string first;
    std::string address;
    std::string city;
    std::string state;
    int zip;
    long int phone;
};
#endif
