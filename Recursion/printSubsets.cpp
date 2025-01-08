#include <bits/stdc++.h>
using namespace std;

void printSubset(vector<int> &arr, vector<int> &ans, int i){
    if(i==arr.size()){
        cout<<"{ ";
        for(int j:ans)
            cout<<j<<" ";
        cout<<"} , ";
        return;
    }
    
    // include
    ans.push_back(arr[i]);
    printSubset(arr,ans,i+1);

    ans.pop_back();    // Backtracking
    // exclude
    printSubset(arr,ans,i+1);
}

int main(){
    vector<int> arr={1,2,3,4};
    vector<int> ans;
    int i=0;

    printSubset(arr,ans,i);
    return 0;
}