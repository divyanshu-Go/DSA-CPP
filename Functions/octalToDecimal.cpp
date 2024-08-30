#include<iostream>
#include<cmath>
using namespace std;

int otd(int a){
    int x = 1;
    int y;
    int z;
    int ans = 0;

    while (a>0)
    {
        y = a%10;
        z = x * y;
        x *=  8 ;
        ans += z;
        a = a/10;

    }
        cout<<"the decimal forn is  : "<<ans;
    
}

int main(){
    int n;
    cout<<"enter a no.";
    cin>>n;

    otd(n);

    return 0;

}