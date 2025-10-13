#include <iostream>
using namespace std;
class A{
private:
    int a_ka_private = 1;
protected:
    int a_ka_protexted = 2;
public:
    int a_ka_public = 3;  

};

class B : public A{
public:
    int b_ka_public = 4;
    void show(){
        cout<<a_ka_protexted<<endl;   // protected can only be accessed in inherited class
    }
};

int main(){
    A a;
    cout<<a.a_ka_public<<"\n"; //only this can be accessed through a
    B b;
    cout<<b.a_ka_public<<"\n";  // can't be accessed becz all members coming from A are now private
    cout<<b.b_ka_public<<"\n";
    return 0;
}