#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxIdx = 0;
    int prevSum = 0;
    for(int i=0;i<k;i++) prevSum+= arr[i];
    int maxSum = prevSum;
    int i = 1;
    int j = k;
    while(j<n){ // sliding window
        int prevSum = prevSum + arr[j] - arr[i-1];
        if(maxSum<prevSum){
            maxSum = prevSum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    cout<<"Max Sum: "<<maxSum<<endl<<"MAX Index: "<<maxIdx<<endl;
}