#include <iostream>
#include <string>
using namespace std;

class Vehicle{
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;

    void showCompany(){
        cout<<companyName<<endl;
    }

    virtual void show(){                    // remove virtual keyword from here and dekhna "Vehicle ka show print hoga"
        cout<<"Vehicle ka show call hua\n";
    }

};

class Bike: public Vehicle{
public:
    int handleSize;
    void show(){
        cout<<"Bike ka show call hua\n";
    }
};


int main(){

    // Compiler pov - Vehicle type ka hai
    // Compile time binding (name to function mapping)
    // runTime time binding  (Virtual keyword)
    
    
    // runTime pov - Bike ka address hai

    Bike b;
    Vehicle *a;
    a = &b; // Parent class pointer store address of child class
    // a->handleSize = 4; throws error hmm...
    a->tyreSize = 4;
    a->show();  // Vehicle ka show call hua instead of Bike hmmm.

    a = new Vehicle; // ab vehicle hi vehicle ke pointer mein store krre hein
    a->show();         

    // all thanks to virtual keyword
    return 0;
}