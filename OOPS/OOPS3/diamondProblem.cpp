#include <iostream>
using namespace std;

class A{
public:
    int a_ka_public;
    A(){
        cout<<"A ka constructor Call hua!\n";
    }
};

class B: virtual public A{
public:
    int b_ka_public;
    B(){
        cout<<"B ka constructor call hua!\n";
    }
};

class C: virtual public A{
public:
    int c_ka_public;
    C(){
        cout<<"C ka constructor call hua!\n";
    }
};

class D: public B,C{
public:
    int d_ka_public;

    void show(){
        cout<<B::a_ka_public; // Jugaad to solve ambiguous error is use scope specifier of virtual keyword
    }
};

int main(){
    D d;
    d.a_ka_public=10;
    d.show();
    return 0;
}