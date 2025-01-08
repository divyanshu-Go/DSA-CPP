#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int k, int low, int high)
{

    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == k)
        return mid;
    else if (arr[mid] < k)
        return binarySearch(arr, k, mid + 1, high);
    else
        return binarySearch(arr, k, low, mid - 1);
}

int main()
{
    int arr[10] = {1, 4, 9, 10, 30, 45, 56, 67, 78, 90};
    cout << binarySearch(arr, 11, 0, 9) << endl;
    ;
    return 0;
}