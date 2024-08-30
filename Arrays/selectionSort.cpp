#include <iostream>
using namespace std;


void SelectionSort(int arr[10], int n){
    


    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n ; j++)
        {
            if ( arr[j] < arr[i])
            {
                int temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
        if(!(i==n-1))
          cout<< " , ";
    }
    
}

int main(){
    
    int arr[10]= {1,5,88,2,77,66,11,20,8,31};
    SelectionSort(arr, 10);
    return 0;
}
