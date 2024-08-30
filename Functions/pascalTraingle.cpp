#include <iostream>
#include <cmath>
using namespace std; 


int fn1(int a)
{
  
    int fn1orial = 1;

    for (int i = 2; i <= a; i++)
    {
        fn1orial *= i;
    }
    return fn1orial;


}


int fn2(int n,int r)
 {
    
    int i=fn1(n);
    int j=fn1(r);
    int k=fn1(n-r);
    
    int ncr = i/(j*k);

    return ncr;

 }
 int fn3(){
    
    int n;
    cout << "enter no. " << endl;
    cin >> n;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout<<fn2(i, j)<<" ";
        }
         cout<<"\n";
    }

    return 0;

 }
int main()
{
    fn3();

    return 0;
    }

