#include <iostream>
#include <cmath>
using namespace std;


void PrintPrimeNos(){

    int up;
    int low;
    int n;
    int flag=0;

    cout<<"Enter Lower Limit : "<<endl;
    cin>>low;
    cout<<"Enter Upper Limit : "<<endl;
    cin>>up;

    while(low<up){
        flag=0;
        for(int i=2; i<=sqrt(low); i++){
            if (low%i == 0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0){
            cout<<low<<" is a Prime no."<<endl;
        }else{
            cout<<low<<" is Not a Prime no."<<endl;
        }
        low++;
    }

    
}

int main(){
    PrintPrimeNos(); 
    return 0;
}
