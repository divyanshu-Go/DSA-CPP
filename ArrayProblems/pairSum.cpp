#include "bits/stdc++.h"
using namespace std;


void pairSum(int arr[], int size, int key){

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size - 1; j++)
        {
            if(arr[i] + arr[j] == key)
            {
                cout<< "Element are : "<<i+1 <<" & "<< j+1<<endl;
                return;
            }
        }
        
    }
    cout<< "Elements doesn't exist "<<endl;
}

void optimizedPairSum(int arr[], int size, int key){
    int low=0;
    int high=size-1;
    
    while(low <= high){
        if(arr[low] + arr[high] == key){
            cout<< "Element are : "<<low+1 <<" & "<< high+1<<endl;
            return;
        }
        else if(arr[low] + arr[high] < key){
            low++;
        }
        else{
            high--;
        }
    }
}


int main(){

    int size=8;
    int arr[size]={2,4,7,11,14,16,20,21};
    int key =31;

    optimizedPairSum(arr, size, key);


    return 0;
}