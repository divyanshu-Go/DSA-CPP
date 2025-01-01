#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // Sorting
    int arr[10] = {7, 8, 9, 6, 3, 5, 2, 4, 1, 0};

    sort(arr, arr + 10);

    for (int i : arr)
        cout << i << " ";
    cout << endl;

    vector<int> arr1 = {7, 8, 9, 6, 3, 5, 2, 4, 1, 0};

    sort(arr1.begin(), arr1.end(), greater<int>());

    for (int i : arr1)
        cout << i << " ";
    cout << endl;

    vector<int> arr2 = {7, 8, 9, 6, 3, 5, 2, 4, 1, 0};

    for (int i : arr2)
        cout << i << " ";
    cout << endl;

    reverse(arr2.begin(), arr2.end());

    for (int i : arr2)
        cout << i << " ";
    cout << endl;

    cout << max(10, 20) << endl;
    cout << min(10, 20) << endl;

    cout << *(max_element(arr2.begin(), arr2.end())) << endl;
    cout << *(min_element(arr2.begin(), arr2.end())) << endl;

    sort(arr2.begin(), arr2.end());

    cout << binary_search(arr2.begin(), arr2.end(), 5) << endl;

    return 0;
}