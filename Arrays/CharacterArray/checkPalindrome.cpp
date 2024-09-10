#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter length: ";
    cin >> n;

    char arr[n + 1]; // Declaring character array with space for null-terminator
    cout << "Enter word: ";
    cin >> arr;

    bool isPalindrome = true; // Flag to indicate palindrome status
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "It is a palindrome";
    else
        cout << "It is not a palindrome";

    return 0;
}
