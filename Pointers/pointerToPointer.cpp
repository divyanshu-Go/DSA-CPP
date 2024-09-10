#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 10;

    int *p = &a;

    int **q = &p;

    cout << q << endl;
    cout << &p << endl;

    cout << *q << endl;
    cout << &a << endl;

    cout << **q << endl;
    cout << *p << endl;

    return 0;
}