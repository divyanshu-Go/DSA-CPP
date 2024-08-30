 #include <iostream>
 #include <climits>
using namespace std;


void Insertion(){
    int n ;
    int max=INT_MIN;
    int min=INT_MAX;
    cout<<"Enter Size of Array : "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter Elements : "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];    
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
        if(!(i==n-1))
          cout<< " , ";
    }

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"\n Max Element: "<<max<<endl;
    cout<<" Min Element: "<<min<<endl;

}


int main(){

    Insertion();

    return 0;
}
