#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int nsp = 0;

    for (int i = 1; i <= n; i++) {
        int no = 1;
        // Left stars
        for (int j = 1; j <= n - i + 1; j++) {
            cout << no++;
        }

        // Spaces
        for (int s = 1; s < nsp; s++) {
            cout << " ";
            no++;
        }

        // Right stars
        for (int j = 1; j <= n - i + 1; j++) {
            if (i == 1 && j == n) continue; // Skip the extra star on first row
            cout << no++;
        }

        nsp += 2;
        cout << endl;
    }

    return 0;
}
