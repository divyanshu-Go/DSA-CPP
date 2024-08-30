#include <iostream>
#include <cmath>
using namespace std;


void CheckPrimeNo(){

    int n;
    int flag=0;

    cout<<"Enter No. : "<<endl;
    cin>>n;

    for(int i=2; i <= sqrt (n) ; i++)
    {
        if (n%i == 0)
        {   
            
            flag=1;
            break;
        }
        
    }
    if(flag==1){
        cout<<"Not a Prime No."<<endl;
    }
    else{
   return ("Prime No.");
        cout<<"Prime No."<<endl;
    }
}

int main(){
    CheckPrimeNo();
   
    return 0;
}
