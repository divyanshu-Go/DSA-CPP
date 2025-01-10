#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int st, int end)
{
    int idx = st - 1, pivot = arr[end];

    for (int j = st; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);

    return idx;
}

void quickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {

        int pivotIdx = partition(arr, st, end);
        quickSort(arr, st, pivotIdx - 1);
        quickSort(arr, pivotIdx + 1, end);
    }
}

int main()
{
    vector<int> arr = {12, 32, 45, 86, 35, 41, 12, 20, 7};

    quickSort(arr, 0, arr.size() - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}