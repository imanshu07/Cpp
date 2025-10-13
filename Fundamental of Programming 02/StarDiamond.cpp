#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // Upper part of the diamond
    for (int i = 1; i <= (2 * n - 1); i++) {
        if (i <= n) {
            for (int j = 1; j <= (n - i); j++) { // Spaces
                cout << "  ";
            }
            for (int k = 1; k <= i; k++) { // Left part of the triangle
                cout << "* ";
            }
            for (int l = 1; l <= (i - 1); l++) { // Right part of the triangle
                cout << "* ";
            }
            cout << endl;
        } 
        else { // Lower part of the diamond
            int down = (2 * n - 1) - i + 1; // Equivalent to (2 * n - i)

            for (int j = 1; j <= (i - n); j++) { // Spaces
                cout << "  ";
            }
            for (int k = 1; k <= down; k++) { // Left part of the triangle
                cout << "* ";
            }
            for (int l = 1; l <= (down - 1); l++) { // Right part of the triangle
                cout << "* ";
            }
            cout << endl;
        }
    }

    return 0;
}
