#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{

    char str[] = {'a', 'b', 'c', '\0'};

    char str1[] = "collage";

    cout << str << endl;
    cout << str1 << endl;
    cout << str1[6] << endl;

    // char str2[20];
    // cout << "enter character array: ";
    // cin >> str2;
    // cout << "your character array: "<< str2 << endl;

    char str3[20];
    cout << "enter character array: ";
    cin.getline(str3, 20);

    cout << "your character array: "<< str3 << endl;

    return 0;
}
