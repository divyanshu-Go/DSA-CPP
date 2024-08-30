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
        int temp = arr[i];
        int j = i - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
