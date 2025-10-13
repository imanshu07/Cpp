#include <iostream>
using namespace std;

class ComplexNumber {
public:
    int imaginary;
    int real;

    ComplexNumber operator + (ComplexNumber &c1) {
        ComplexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this->real;
        return c3;
    }

    ComplexNumber operator - (ComplexNumber &c1) {
        ComplexNumber c3;
        c3.imaginary = this->imaginary - c1.imaginary;
        c3.real = this->real - c1.real;
        return c3;
    }

    ComplexNumber operator * (ComplexNumber &c1) {
        ComplexNumber c3;
        c3.real = (this->real * c1.real) - (this->imaginary * c1.imaginary);
        c3.imaginary = (this->real * c1.imaginary) + (this->imaginary * c1.real);
        return c3;
    }
};

int main() {
    ComplexNumber a1, a2, sum, diff, prod;
    
    a1.imaginary = 10;
    a1.real = 5;

    a2.imaginary = 2;
    a2.real = 3;

    sum = a1 + a2;
    diff = a1 - a2;
    prod = a1 * a2;

    cout << "Sum: " << sum.real << " + " << sum.imaginary << "i" << endl;
    cout << "Difference: " << diff.real << " + " << diff.imaginary << "i" << endl;
    cout << "Product: " << prod.real << " + " << prod.imaginary << "i" << endl;

    return 0;
}
