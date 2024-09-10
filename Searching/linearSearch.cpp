#include <iostream>
using namespace std;


void linearSearch(int arr[10], int n){
    
    int key;
    int flag=0;

    cout<<"Enter Key to Find: "<<endl;
    cin>>key;

    for (int i = 0; i < n; i++)
    {
        if(key==arr[i]){
            cout<<key <<" is at position "<<i+1<<endl;
            flag=1;
            return ;
        }
    }
    if(flag==0){
        cout<<key<<" Doesn't Exist"<<endl;
    }
    
}

int main(){
    
    int arr[10]= {1,2,3,4,5,11,22,33,44,55};
    linearSearch(arr, 10);
    return 0;
}
