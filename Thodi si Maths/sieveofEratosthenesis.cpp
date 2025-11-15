#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> sieve(int n) {
    
    // creation of boolean array
    vector<bool> prime(n + 1, true);
    for (int p = 2; p <= sqrt(n); p++) {
        if (prime[p] == true) {
            
            // marking as false
            for (int i = p * p; i <= n; i += p)   // To ignore factors like 5: 10 15 20 
                prime[i] = false;                  // see 5*2 , 5*3, 5*4 already counted in factors of 2,3,4 ok
        }
    }
    
    vector<int> res;
    for (int p = 2; p <= n; p++){
        if (prime[p]){ 
            res.push_back(p);
        }
    }
    return res;
}

int main(){
    int n = 35;
    vector<int> res = sieve(n);
    for(auto ele : res){
        cout << ele << ' ';
    }
    return 0;
}