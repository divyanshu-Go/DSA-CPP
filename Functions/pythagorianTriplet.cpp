#include<iostream>
#include<cmath>
using namespace std;
    int pythagorian(int a, int b, int c){
        if (a*a == b*b + c*c)
        {
            cout<<"it is a pythagorian tiplet";
        }
        else if (b*b == a*a + c*c){
        cout<<"it is a pythagorian triplet";
        }
        else if (c*c == a*a + b*b)
        {
            cout<<"it is a pythagorian triplet";
        }
        else
        {
            cout<<"it is not a pythagorian triplet";
        }
        
    }
int main(){
    int x,y,z;
    cout<<"enter the length";
    cin>>x;
    cout<<"enter the breadth";
    cin>>y;
    cout<<"enter the hight";
    cin>>z;

    pythagorian(x,y,z);
    return 0;
}