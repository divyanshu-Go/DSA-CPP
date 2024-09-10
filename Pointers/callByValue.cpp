#include <bits/stdc++.h>
using namespace std;


void swap(char a, char b)
{
    char temp = a;
    a=b;
    b=temp;
}


int main(){

    char a='a';
    char b='b';


    cout<<"Before swaping -"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    swap(a,b);

    cout<<"After swaping -"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;


    return 0;
}