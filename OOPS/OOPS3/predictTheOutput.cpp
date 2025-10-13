#include <iostream>
using namespace std;

// Defines the Student class
class Student {
public:
    int rollNumber;
    int age;
};

// Main function where the program execution begins
int main() {
    // Create an uninitialized Student object s1
    Student s1;
    s1.age = 10;
    s1.rollNumber = 30;
    
    // Student s2 = s1;       // deep copy
    // cout << s1.rollNumber << " " << s1.age<<endl;
    // cout << s2.rollNumber << " " << s2.age<<endl;

    // s1.age = 13;
    // s1.rollNumber = 13;
    // cout << s1.rollNumber << " " << s1.age<<endl;
    // cout << s2.rollNumber << " " << s2.age<<endl;

    Student s3;
    s3 = s1;

    cout << s1.rollNumber << " " << s1.age<<endl;
    cout << s3.rollNumber << " " << s3.age<<endl;

    s1.age = 1;
    s1.rollNumber = 2;

    cout << s1.rollNumber << " " << s1.age<<endl;
    cout << s3.rollNumber << " " << s3.age<<endl;
    
    
    return 0;
}