#include <iostream>
using namespace std;


void zigZagPattern()
{
    int n;
    
    cout<<"Enter column: "<<endl;
    cin>>n;

    
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {                 
             cout<<"  "; 

             if(i+j==4)
             { 
                  i += 2;
                cout<<"* ";
             }
             else
               cout<<"";
        }
               
                      
        cout<<endl;                                                                                                                                                             
    }
    

}

int main(){

    zigZagPattern();

    return 0;
}