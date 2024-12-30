#include "bits/stdc++.h"
using namespace std;



void smallestPositiveIntMissing(){
    int arr[6]={0,-9,1,3,-4,5};

    bool ind[6];
    for (int i = 0; i < 6; i++)
    {
        ind[i]=false;
    }
    
    int ans=-1;
    
    for (int i = 0; i < 6; i++)
    {
        if(arr[i] >= 0){
            ind[arr[i]] = true;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        if(ind[i] == false){
            ans=i;
            break;
        }
    }
    

    cout<<ans<<endl;
    
}


int main(){
    
    smallestPositiveIntMissing();   
    return 0;

}