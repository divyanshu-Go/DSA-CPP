#include <bits/stdc++.h>
using namespace std;



int main(){

    int n;
    cout<<"Enter length ";
    cin>>n;

    char arr[n+1];
    cout<<"Enter word: ";
    cin>>arr;

    int i=0;
    int flag=0;
    while(i <= (n/2))
    {
        n--;
        if(arr[n] != arr[i]){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    cout<<"yes";
    else
    cout<<"no";

    return 0;
}