#include <iostream>
#include <cmath>
using namespace std;


void reverseNumber(){
    long int num;
    long int rev=0;

    cout<<"Enter No. : "<<endl;
    cin>>num;

    while(num>0){
        int rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    cout<<rev<<endl;

}



int main(){
    reverseNumber(); 
    return 0;
}
