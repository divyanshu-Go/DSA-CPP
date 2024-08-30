#include <iostream>
using namespace std;


void BinarySearch(int arr[10], int n){
    
    int key;
    int flag=0;

    cout<<"Enter Key to Find: "<<endl;
    cin>>key;

    int low=0;
    int high=n; 
    int mid=(low+high)/2;

    while (low<=high)
    {
        if(arr[mid]==key){
            cout<<key<<" is at positon "<<mid+1<<endl;
            return;
        }else if(key>arr[mid]){
            low=mid+1;
            
        }else{
            high=mid-1;
            
        }
        mid=(low+high)/2;
    }
    if(flag==0){
        cout<<key<<" Doesn't Exist "<<endl;
    }

    
}

int main(){
    
    int arr[10]= {1,2,3,4,5,11,22,33,44,55};
    BinarySearch(arr, 10);
    return 0;
}
