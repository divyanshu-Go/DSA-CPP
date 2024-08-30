#include <iostream>
using namespace std;


void invertedHalfPyramid(){
    int col;
    cout<<"Enter Cols: "<<endl;
    cin>>col;

    for(int i=col; i>=1; i--)
    {
        for(int j=col; j>=1; j--)
        {
            cout<<" * ";
        }
        col--;
        cout<<endl;
    }

}



int main(){

    invertedHalfPyramid();

    return 0;
}