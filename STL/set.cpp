#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{

    // Store unique elements in sorted order
    set<int> s;

    s.insert(40);
    s.insert(20);
    s.insert(50);
    s.insert(30);
    s.insert(10);
    s.insert(40);
    s.insert(40);

    for (auto i : s)
        cout << i << " ";
    cout << endl;

    // Store elements in sorted order
    multiset<int> s1;
    s1.insert(20);
    s1.insert(50);
    s1.insert(30);
    s1.insert(10);
    s1.insert(40);
    s1.insert(40);

    for (auto i : s1)
        cout << i << " ";
    cout << endl;

    // Store unique elements unorder
    unordered_set<int> s2;
    s1.insert(20);
    s2.insert(50);
    s2.insert(30);
    s2.insert(10);
    s2.insert(40);
    s2.insert(40);

    for (auto i : s2)
        cout << i << " ";
    cout << endl;

    return 0;
}