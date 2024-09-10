#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[]= {1,2,3,4,5,6};
    
    int *ptr = arr;    // or int *ptr = &arr[0]; 
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<*arr<<endl;   // 1

    for (int i = 0; i < 6; i++)
    {
        cout<<*ptr<<" at : "<<ptr<<endl;
        ptr++;
    }

    // or

    for (int i = 0; i < 6; i++)
    {
        cout<<*(arr + i)<<" at : "<<(arr + i)<<endl;
    }
        

    return 0;
}