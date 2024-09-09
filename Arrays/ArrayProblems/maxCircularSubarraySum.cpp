#include "bits/stdc++.h"
using namespace std;


int kadanes(int arr[], int size){

    int maxSum= INT_MIN;
    int currentSum=0;

    for (int i = 0; i < size; i++)
    {
        currentSum += arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum= max(maxSum , currentSum);
    }
    return maxSum;
}

void maxCircularSubarraySum(){
    int size=5;
    int arr[size]={-1,4,-3,7,-1};

    int maxSum= INT_MIN;
    int totalSum=0;

    int nonwrapSum= kadanes(arr, size);

    for (int i = 0; i < size; i++)
    {
        totalSum += arr[i];
        arr[i]= -arr[i];
    }

    int wrapSum = totalSum + kadanes(arr , size);
    
    maxSum = max(wrapSum , nonwrapSum);
    
    
    cout<<maxSum<<endl; 
}



int main(){

    maxCircularSubarraySum();

    return 0;
}