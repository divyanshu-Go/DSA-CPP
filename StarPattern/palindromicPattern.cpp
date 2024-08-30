#include <iostream>
using namespace std;


void PalindromicPattern()
{
    int n;
    
    cout<<"Enter Rows: "<<endl;
    cin>>n;

    
    for (int i = 1; i <= n; i++)
    {
    int x=i+1; 

    
        for (int j = 1; j <= n-i; j++)
        {                 
             cout<<"  ";   
        }
               for (int k = i; k >= 1 ; k--)
               {
                   x--;
                   cout<<x<<" ";
               }

                 for (int l=2;l<= i; l++)
                 {
                    cout<<l<<" ";
                 }
                      
        cout<<endl;                                                                                                                                                             
    }
    

}

int main(){

    PalindromicPattern();

    return 0;
}