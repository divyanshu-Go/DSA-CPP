#include "bits/stdc++.h"
using namespace std;

void spiralOrderMatrix()
{
    int n, m;
    cout << "Enter no. of rows and cols: ";
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter element " << i << " " << j<<" : ";
            cin >> arr[i][j];
        }
    }

    
    int col_start=0, row_start=0, col_end=m-1, row_end=n-1;
    while(row_start <= row_end && col_start <= col_end)
    {
        for (int col = col_start; col <= col_end; col++)
        {
           cout<<arr[row_start][col]<<" ";
        }
        

        for (int row = row_start+1; row <= row_end; row++)
        {
           cout<<arr[row][col_end]<<" ";
        }
        

        for (int col=col_end-1; col >= col_start; col--)
        {
           cout<<arr[row_end][col]<<" ";
        }
        
        
        for (int row=row_end-1; row >= row_start+1; row--)
        {
           cout<<arr[row][col_start]<<" ";
        }

        col_start++;
        col_end--;
        row_start++;
        row_end--;
    }    
}

int main()
{
    spiralOrderMatrix();

    return 0;
}