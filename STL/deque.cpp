#include <iostream>
#include <deque>
using namespace std;

int main(){

    // Deque is double-ended queue;
    deque<int> d={1,2,3,4,5};

    for(int i:d)
        cout<<i<<" ";
    cout<<endl;

    cout<<"Random access is possible : "<<d[2]<<endl;

    return 0;
}