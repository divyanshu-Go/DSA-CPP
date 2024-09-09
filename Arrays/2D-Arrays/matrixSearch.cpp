#include <bits/stdc++.h>
using namespace std;



void matrixSearch(){

    int n, m, key, flag=0;
    cout<<"Enter n & m : ";
    cin>>n>>m;
    cout<<"Enter key : ";
    cin>>key;

    int arr[n][m];

    cout<<"Enter elements: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(key == arr[i][j]){
                cout<<"Key is at row: "<<i<<" col: "<<j;
                flag=1;
                break;
            }
            if(flag == 1)
                break;
        }
        if(flag == 1)
            break;
    }
    if(flag != 1)
        cout<<"Key Doesn't exist !";
}


void optimizedMatrixSearch(){
    int arr[4][4]=
    {
        {1,4,7,11},
        {2,5,8,12},
        {3,6,9,16},
        {10,13,14,17}
    };

    int key, row=0, col=3;
    cout<<"Enter key : ";
    cin>>key;

    while(row < 4 && col >= 0){
        if(arr[row][col] == key){
            cout << "Key found at position (" << row << ", " << col << ")!" << endl;
            return;
        }
        else if(arr[row][col] > key){
           col--;
        }
        else{
           row++;
        }
    }
    cout << "Key not found in the matrix." << endl;

}

int main(){

    optimizedMatrixSearch();

    return 0;
}