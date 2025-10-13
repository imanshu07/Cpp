#include <iostream>
using namespace std;

class A{
public:
    int a_ka_public;
    void show(){
        cout<<"Mai A ka show hu\n";
    }
};

class B: public A{
public:
    int b_ka_public;
    void show(){
        cout<<"Ahm B sgiw Asmi!\n";
    }
};


int main(){

    A a;
    a.show();
    B b;
    b.show();
    b.A::show();  // using scope resolution operators
    cout<<endl<<endl<<endl;
    
    //Pointer approach
    A *a1;
    B b1;
    a1 = &b1; // Parent class pointer store address of child class

    return 0;
}