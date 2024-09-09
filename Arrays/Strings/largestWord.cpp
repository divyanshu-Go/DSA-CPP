#include <bits/stdc++.h>
using namespace std;



int main(){

    int n;
    cout<<"Enter n :";
    cin>>n;
    cin.ignore();

    char arr[n+1];

    cout<<"Enter sentence: ";
    cin.getline(arr, n+1);
    

    int currLen =0, maxLen=0 , st=0, maxst=0;

    int i=0;
    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currLen > maxLen)
            {
                maxLen=currLen;
                maxst=st;
            }
            currLen=0;
            st=i+1;
        }
        else{
            currLen++;
        }

        if(arr[i] == '\0')
            break;

        i++;

    }
    
    cout << "The length of the longest word is: " << maxLen << endl;
    cout<< arr<<endl;
    for (int i = 0; i < maxLen ; i++)
    {
        cout<<arr[i+maxst];
    }
    

    return 0;
}