#include "bits/stdc++.h"
using namespace std;

void subArray()
{
    int n;
    cout << "\nEnter no. of elements: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "{";
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            if (i == j)
            {
                cout << "(" << arr[j] << ") ";
            }
            else
            {
                cout << " (" << arr[i];
                int k = i+1;
                while (k <= j)
                {
                    cout << "," << arr[k];
                    k++;
                }
                cout << ") ";
            }
        }
    }
    cout << "}";
}

int main()
{
    subArray();

    return 0;
}