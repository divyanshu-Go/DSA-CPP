#include<iostream>
#include<deque>
using namespace std;


int main(){
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    dq.push_front(40);
    dq.push_front(50);

    while(!dq.empty()){
        cout << dq.front() << " ";
        dq.pop_front();
    }
    
    cout << endl;
    return 0;
}