#include <iostream>
using namespace std;

int stair(int n, string path) {
    if (n == 0) {
        cout << path << endl;
        return 1;
    }
    if (n < 0) return 0;

    int c1 = stair(n - 1, path + "1");
    int c2 = stair(n - 2, path + "2");

    return c1 + c2;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "All possible choices:" << endl;
    int total = stair(n, "");
    cout << "Total no of ways: " << total << endl;
    return 0;
}
