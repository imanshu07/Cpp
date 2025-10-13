#include <iostream>
#include <string>
using namespace std;

class Vehicle{
public:
    int tyreSize;
    int engineSize;

    virtual void show(){
        cout<<"Vehicle ka show call hua\n";
    }

};

class Bike: public Vehicle{
public:
    int handleSize;
    char ch;         // char is one byte mgr 16 ara hai kyuki 32bit system architecture jo hota hai usme multiple of 4 mein byte assign hoti hai
    void show(){
        cout<<"Bike ka show call hua\n";
    }
};


int main(){

    Vehicle a;
    Bike b;
    cout<<sizeof(a)<<endl; // before virtual size was 8 & 12
    cout<<sizeof(b)<<endl; // After 12 & 16
    return 0;
}