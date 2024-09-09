#include "bits/stdc++.h"
using namespace std;


void inputOutput(){
    int n, m;
    cout<<"Enter no. of Rows & Columns :";
    cin>>n>>m;

    int arr[n][m];
    cout<<"Enter elements:- "<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Element at pos "<<i<<" "<<j<<":";
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}


int main(){
    
    inputOutput();
    return 0;

}