#include <iostream>
#include <cmath>
using namespace std;


int fn1(int p)
{
    
   return 0;
}

int main(){ 

    int j;
    int n;
    int m;
    int flag;

    cout<<"enter a no."<<endl;
    cin>>n;
    cout<<"enter a no."<<endl;
    cin>>m;

    for (j = n; j <= m; j++)
    {
        //    cout<<j<<endl;
        
       flag=0;

    for(int i= 2; i < j ; i++)
    {
        if (j%i == 0)
        {   
            flag=1;
            break;
        }        
    }
    if(flag==1){
        cout<<"not prime: "<<j<<endl;
    }
    else{
        cout<<"prime :"<<j<<endl;
        // flag = 2;
    }

    }

    // if (flag==2)
    // {
    //     cout<<j<<endl;
    // }
    return 0;
}
