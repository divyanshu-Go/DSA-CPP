#include<iostream>
#include<cmath>
using namespace std;
int fact(int a){

     int factorial = 1;

    for (int i = 2; i <=a ; i++)
    {
        factorial *= i;
    }
    cout<<factorial<<endl;
    return factorial;
}
int main(){
    int n;
    int r;
    cout<<"enter the n";
    cin>>n;
    cout<<"enter the r";
    cin>>r;
    int nr = n-r;

     n = fact(n);
     r = fact(r);
     nr = fact(nr);

    int ans = n/(r*nr);
    cout<<ans;

    return 0;
}