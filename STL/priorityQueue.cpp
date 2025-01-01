#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{

    // MAX-HEAP
    priority_queue<int> q;

    q.push(20);
    q.push(10);
    q.push(40);
    q.push(30);

    while (!q.empty())
    {
        cout << q.top() << " "; // Bydefault in descending order
        q.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> q1;

    q1.push(40);
    q1.push(20);
    q1.push(10);
    q1.push(30);

    while (!q1.empty())
    {
        cout << q1.top() << " "; // Now in ascending order
        q1.pop();
    }
    cout << endl;

    return 0;
}