#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int st, int mid, int ed)
{

    int i = st, j = mid + 1;
    vector<int> temp;
    int inversionCount = 0;
    while (i <= mid && j <= ed)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
            inversionCount += (mid - i + 1);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= ed)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[st + idx] = temp[idx];
    }

    return inversionCount;
}

int mergeSort(vector<int> &arr, int st, int ed)
{
    if (st < ed)
    {
        int mid = st + (ed - st) / 2;

        int leftInversion = mergeSort(arr, st, mid);
        int rightInversion = mergeSort(arr, mid + 1, ed);

        int Inversion = merge(arr, st, mid, ed);

        return leftInversion + rightInversion + Inversion;
    }
    return 0;
}

int main()
{
    vector<int> arr = {12, 32, 45, 7};

    int count = mergeSort(arr, 0, arr.size() - 1);

    cout << count << endl;
    return 0;
}