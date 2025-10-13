#include <iostream>
using namespace std;
int binary_to_string(string &binary){
    int n = binary.length();
    int result = 0;
    for(int i=n-1;i>=0;i--){
        char ch = binary[i];
        int num = ch - '0';
        result = result + num*(1<<(n-i-1));   // x<<1 is same as x*(2^1)
    }
    return result;
}
string decimal_to_binary(int num){
    string result = "";
    while(num>0){
        if(num%2==0){ // every even no in bits end with a 0
            result = "0" + result;
        }
        else{
            result = "1" + result;
        }
        num = num>>1;    // same as num/2 
    }
    return result;
}
int main(){
    string str = "0000001101";    // 1 is set bit rest are offbit/unsetbit
    cout<<binary_to_string(str)<<endl;
    cout<<decimal_to_binary(13);
    return 0;
}