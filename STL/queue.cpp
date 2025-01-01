#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // FIFO
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;


    return 0;
}