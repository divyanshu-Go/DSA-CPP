#include "bits/stdc++.h"
using namespace std;

void sumOfSubarray()
{
    cout << "Enter size of Array: ";
    int size;
    cin >> size;

    int arr[size];
    cout << "Enter elements: ";
    for (int k = 0; k < size; k++)
    {
        cin >> arr[k];
    }

    int s;
    cout << "Enter sum to find: ";
    cin >> s;

    int st = -1, en = -1, i = 0, j = 0, sum = 0;

    while (j < size && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }

    if (sum == s)
    {
        st = i + 1;
        en = j ;
        cout << st << " " << en;
        return;
    }

    while (j < size)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }

    cout << st << " " << en << endl;
}

int main()
{

    sumOfSubarray();
    return 0;
}
