#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"enter a no."<<endl;
    cin>>n;

    for(int i = 0; i <= n; i++)
    {
         sum += i;
    }
        cout<<sum;
    
    return 0;
}