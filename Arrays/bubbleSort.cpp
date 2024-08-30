#include <iostream>
#include <climits>
using namespace std;

void BubbleSort()
{
    int n;
    
    cout << "Enter Size of Array : " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter Elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (!(i == n - 1))
            cout << " , ";
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nAfter Sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (!(i == n - 1))
            cout << " , ";
    }
}

int main()
{

    BubbleSort();

    return 0;
}
