#include <bits/stdc++.h>
using namespace std;

void majorityElement(vector<int>& arr){
    sort(arr.begin(),arr.end());

    int n=arr.size();
    int freq=1;
    int ans=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i-1]==arr[i]){
            freq++;
            if(freq>n/2){
                cout<<"ANSWER : "<<ans;
                break;
            }
        }
        else{
            ans=arr[i];
            freq=1; 
        }
    }
    
}



int main(){

    vector<int> arr={2,5,5,5,2,1,1,5,5,1,2,5,5,2};

    majorityElement(arr);


    return 0;
}