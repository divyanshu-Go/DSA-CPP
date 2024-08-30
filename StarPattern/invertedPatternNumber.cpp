#include <iostream>
using namespace std;


void invertedPatternNumber(){
    int n;
    
    cout<<"Enter No.: "<<endl;
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            cout<<" "<<j<<" ";
        }
        
        cout<<endl;                                                                                                                                                             
    }
    

}

int main(){

    invertedPatternNumber();

    return 0;
}