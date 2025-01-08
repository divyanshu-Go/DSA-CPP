#include <bits/stdc++.h>
using namespace std;

void printCount(int n){   //Recursive Function
    if(n==1) {                                  //Base case
        cout<<1<<endl; 
        return;
    }

    cout<<n<<" , ";
    printCount(n-1);                            //Recursive call
}

int factorial(int n){                   //Time complexity: O(n)
    if(n==0 || n==1)                    //Space complexity: O(n)
        return 1;
        
    return n*factorial(n-1);
}

int main(){
    // printCount(8);
    cout<<factorial(5)<<endl;;
    return 0;
}