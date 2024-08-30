#include <iostream>
using namespace std;


void RhombusPattern(){
    int row;
    
    cout<<"Enter Rows: "<<endl;
    cin>>row;
    
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row-i ; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= row ; k++)
        {
            cout<<" * ";
        }
        
       
        cout<<endl;                                                                                                                                                             
    }
    

}

int main(){

    RhombusPattern();

    return 0;
}