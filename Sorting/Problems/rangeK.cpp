#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a,float b){
    if(a<=b) return a;
    else return b;
}

int main(){

    int arr[] ={5,3,10,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    float kmin = INT_MIN;
    float kmax = INT_MAX;
    bool flag = true;

    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            kmin = max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else{
            kmax = min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }

    if(flag == false) cout<<"-1";
    else if(kmin==kmax){
            if(kmin-(int)kmin==0){ // Kmin is an integer already
                cout<<"There is only one integer value K: "<<kmin;
            }
            else cout<<-1;
    }
    else{
        if(kmin-(int)kmin>0){
            kmin = (int)kmin + 1;
        }
        cout<<"Range of K: ["<<kmin<<","<<int(kmax)<<"]";
    }

    return 0;
}