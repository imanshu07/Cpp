#include <iostream>
using namespace std;
int main(){
    // char str[] = {'a','b','c','d','e','f'};
    // char str[] = "abcdef";                                // also works
    char str[5] = {'a','b'};
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<str;                         // hmm nice pura print krdiya 
    return 0;
}