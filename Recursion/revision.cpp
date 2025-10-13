#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr1[] = {1,3,5,7,10,12};
    int arr2[] = {2,3,6,15};
    int arr[10];
    int i=0;
    int j=0;
    int k =0;
    while(i<6 && j<10){
        if(arr1[i]<=arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else if(arr1[i]>=arr2[j]){
            arr[k] = arr[j];
            j++;
            k++;
        }
    } 
}