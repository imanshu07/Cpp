#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string str = "123456";
    int x = stoi(str);            // String to integer
    cout<<x+1<<endl;  // 123457

    str = "12345678910111213";
    long long x2 = stoll(str);       // String to long long
    cout<<x2;

    return 0;
}