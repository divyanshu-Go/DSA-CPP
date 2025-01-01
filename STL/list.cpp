#include <iostream>
#include <list>
using namespace std;

int main(){

    //List is a doubly linked list
    list<int> l;

    // insertion
    l.push_back(1);  // or l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    
    for(int i:l)
        cout<<i<<" ";
    cout<<endl;

    l.pop_front();
    l.pop_back();

    // l[1] --> random access is not possible

    return 0;
}