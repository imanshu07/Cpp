#include <iostream>
using namespace std;

class Shape {  // Abstract class
public:
    virtual void draw() = 0;  // pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    // Shape s;   // ❌ Error: Cannot create object of abstract class
    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->draw();  // "Drawing Circle"
    s2->draw();  // "Drawing Square"

    delete s1;
    delete s2;
}
