#include "bits/stdc++.h"
using namespace std;


void recordBreakingDay(int arr[] ,int size){

    int max=-1;
    for (int i = 0; i< size; i++)
    {
        if(arr[i] > max){
            if(arr[i] > arr[i+1]){
                cout<<"Record Breaking Day : "<<i+1<<endl;
            }
            max=arr[i];
        }
        
    }
    
}


int main(){

    int arr[] = {1,2,0,7,2,0,8,8,2,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    recordBreakingDay(arr, size);

    return 0;
}