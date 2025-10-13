#include <iostream>
using namespace std;

class Student {
private:   
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Friend function declaration
    friend void displayDetails(Student s);
};

// Friend function definition
void displayDetails(Student s) {
    // Accessing private members directly
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s1("Rahul", 95);
    displayDetails(s1);
    return 0;
}
