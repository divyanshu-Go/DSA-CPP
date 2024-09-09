#include "bits/stdc++.h"
using namespace std;



void maximumSubarraySum(){
    int arr[5]={-1,4,-3,7,-1};

    int maxSum= INT_MIN;
    int sum=0;

    for (int i = 0; i < 5; i++)
    {   
        sum=0;
        for (int j = i; j<5; j++)
        {
            sum+=arr[j];
            maxSum=max(sum , maxSum);
        }
        
    }
    
    cout<<maxSum<<endl; 
}

void kadanes(){
    int arr[5]={-1,4,-3,7,-1};

    int maxSum= INT_MIN;
    int currentSum=0;

    for (int i = 0; i < 5; i++)
    {
        currentSum += arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum= max(maxSum , currentSum);
    }
    cout<<maxSum<<endl;
}


int main(){

    // maximumSubarraySum();
    kadanes();

    return 0;
}