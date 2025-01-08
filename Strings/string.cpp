#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "apna college";    //dynamic --> resize at runtime
    cout<<str<<endl;

    string str1 = "computer";    
    string str2 = "science";   
    cout<< str1 + " " + str2 <<" of length "<<str1.length() + str2.length()<<endl;

    string str3;
    cout<<"enter string : ";
    getline(cin, str3);

    cout<<"your string : "<<str3<<endl;
    cout<<"\"div\" your string at : "<<str3.find("div")<<endl;

    str3[0]='p';                          // string are mutacle in c++
    cout<<"your string : "<<str3<<endl;

    return 0;
}