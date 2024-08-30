#include <iostream>
#include <cmath>
using namespace std;


void fibenacciSeries(){

    int n;
    int t1=0;
    int t2=1;

    cout<<"Enter No. : "<<endl;
    cin>>n;

    cout<< t1<< " , ";
    cout<< t2;
    while(n>2){
        cout<< " , ";
        int t3= t1 + t2;
        t1= t2;
        t2= t3;
        cout<< t3;
        
        n--;
    }


}

int main(){
    fibenacciSeries(); 
    return 0;
}
