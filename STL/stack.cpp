#include <iostream>
#include <stack>
using namespace std;

int main(){

    // LIFO
    stack<int> s;

    s.push(10);          
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.empty()){
        cout<<s.top() <<" ";
        s.pop()   ; 
    }
    cout<<endl;

    stack<int> s1;
    s1.push(10);          
    s1.push(20);
    stack<int> s2;

    s1.swap(s2);

    cout<<"s1.size() --> "<<s1.size()<<endl;
    cout<<"s2.size() --> "<<s2.size()<<endl;


    return 0;
}