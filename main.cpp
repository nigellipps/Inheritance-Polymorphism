// Nigel Lipps
// inheritance and polymorphism

#include <iostream>
using namespace std;
#include "PersonData.h"
#include "CustomerData.h"

int main() {
    CustomerData d(123, true);
    //this accesses customer data and prints out all the customers info
    cout << d.getNumber() << endl << d.getFirst() << endl
         << d.getLast() << endl << d.getAddress() << endl
         << d.getCity() << endl << d.getState() << endl;
    
    return 0;
}
