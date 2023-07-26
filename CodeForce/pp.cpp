#include<bits/stdc++.h>
using namespace std;
int main() {

    
    int t,min=0,start=0,last=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        
        cin>>arr[i];
    }



    min=abs(arr[0]-arr[t-1]);
    start=1;//1 
    last=t;//5
    //cout<<t;
    
    //cout<<last;

    
    for(int i=0;i<t-1;i++){
      
      if(min>abs(arr[i]-arr[i+1])){

             min=abs(arr[i]-arr[i+1]);
             start=i+1;
             last=i+2;

           }
        
    }
    cout<<start<<" "<<last;
    //cout<<
}