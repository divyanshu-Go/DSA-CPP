#include <iostream>
using namespace std;


void rectangularStarPattern(){
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
            cout<<" * ";
        }
        cout<<"\n";
    }
    // return;
}



int main(){

rectangularStarPattern();

return 0;
}