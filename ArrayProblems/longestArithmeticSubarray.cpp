#include "bits/stdc++.h"
using namespace std;

void longestArithmeticSubarray(int arr[], int size)
{
    int count = 0;
    int longest=0;
    int diff = arr[1] - arr[0];

    for (int i = 0; i + 1 < size; i++)
    {

        if (diff == arr[i + 1] - arr[i])
        {
            count++;
        }
        else
        {
            diff = arr[i+1]-arr[i];
            count=0;
            i--;
        }
        longest=max(longest , count);
    }

    cout<< longest << endl;
}

int main()
{
    int arr[] = {10, 7, 4, 6, 8, 10, 12, 14, 16, 10, 11, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    longestArithmeticSubarray(arr, size);
    return 0;
}