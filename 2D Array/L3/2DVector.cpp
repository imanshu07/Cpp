#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=5;
    int m = 4;
    int k =3;
    vector <vector<int>> v;  // An empty 2D vector (no rows, no columns)
    vector <vector<int>> v1(m);    // A 2D vector with m rows (i.e., 4), but each row is empty.
    vector <vector<int>> v2(m, vector<int> (n));    // A 2D vector with m rows, Each row has n integers Each element initialized to 0
    vector <vector<int>> v3(n, vector<int>(n,k));    // each element intialized to k
    return 0;      
}