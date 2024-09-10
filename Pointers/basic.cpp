#include <bits/stdc++.h>
using namespace std;



int main(){

    int a=6;
    int *a_prt;   
    a_prt = &a;     // or  int *a_ptr = &a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<a_prt<<endl;
    cout<<&a_prt<<endl;
    cout<<*a_prt<<endl;
    
    *a_prt=10;

    cout<<a;

    return 0;
}