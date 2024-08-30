#include <iostream>
using namespace std;


void halfPyamidNumber()
{
    int row;
    cout<<"enter a roww "<<endl;
    cin>>row;

    for (  int i = 1; i <= row; i++)
    {
        for ( int j = 1; j <= i; j++)
        {

         cout<<" "<<i<<" ";        
        }

        cout<<endl;
    } 

}


int main(){

 halfPyamidNumber();

    return 0;
}