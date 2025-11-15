#include <iostream>
#include <vector>
using namespace std;

void sieve(int n) {
    vector<bool> isPrime(n+1, true);

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " "; //kyuki idhr aaye to already i-1 tak sare no ke factors count krliye hein tab bhi ye bach gaya to yeh bhi prime

            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    int n = 20;
    sieve(n);
    return 0;
}
