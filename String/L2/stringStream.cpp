#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){

    string str = "Raghav       is a maths teacher";
    stringstream ss(str);
    string temp;
    while(ss>>temp){       // ss mein se input lelo temp mein
        cout<<temp<<endl;         // ignore spaces nice .....
    }    
    
    return 0;
}