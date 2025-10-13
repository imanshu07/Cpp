#include <iostream>
using namespace std;
void square(int i){
    cout<<i*i<<endl;    
} 
int main(){
    
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        square(i);
    }
    return 0;
}