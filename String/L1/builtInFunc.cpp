#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "Anshu is the Goat";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;

    str.push_back('a');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;

    


    return 0;
}