#include "bits/stdc++.h"
using namespace std;



void smallestPositiveInteger(){
    int arr[10]={-30,20,1000,-6000,59,12,30,-7,-1,25};
    int min=INT_MAX;
    
    for (int i = 0; i < 10; i++)
    {
        if(min > arr[i] && arr[i] >= 0){
            min = arr[i];
        }
    }

    cout<<min<<endl;
    
}


int main(){
    
    smallestPositiveInteger();   
    return 0;

}