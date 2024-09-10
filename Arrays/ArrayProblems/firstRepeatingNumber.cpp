#include "bits/stdc++.h"
using namespace std;


void fristRepeatingNum(){

    int arr[]= {0,5,6,1,4,8,3,9,9,7,7};
    int size= sizeof(arr)/sizeof(arr[0]);

    int index[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int minIndex= INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if(index[arr[i]] != -1 &&  minIndex > index[arr[i]]){
            minIndex = index[arr[i]];    
            }
            else{
            index[arr[i]]=i;
        }

    }
    
    cout<<endl<<arr[minIndex];
}



int main(){
    
    fristRepeatingNum();
    return 0;

}