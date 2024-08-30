#include <iostream>
using namespace std;


void hollowRectangularPattern(){
    int row;
    int col;
    cout<<"Enter Rows: "<<endl;
    cin>>row;
    cout<<"Enter Cols: "<<endl;
    cin>>col;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if(i==1 || i==row || j==1 || j==col)
            {
                cout<<" * ";
            }else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }

}



int main(){

    hollowRectangularPattern();

    return 0;
}