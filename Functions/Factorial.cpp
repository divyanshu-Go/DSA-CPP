#include <iostream>
#include <cmath>
using namespace std;


void factorial (){

    int n;
    int fact = 1;

    cout<<"Enter No. : "<<endl;
    cin>>n;

    for(int i=1; i <= n ; i++)
    {   
       cout<<i;
       if(!(i==n))
       cout<< " * ";
       fact = fact * i ;
        
    }
    cout<<" = "<<fact;
    
}

int main(){
    factorial(); 
    return 0;
}
