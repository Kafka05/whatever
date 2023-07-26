#include <iostream>
using namespace std; 
int main() {
int n,dif;
int arr[n];
cin>>n;
for (int i=0;i<n;i++){
    cin>>arr[i];
}
int m;
m=abs(arr[n-1]-arr[0]);
int n1=n-1;
int n2=0;
for (int i=0;i<n-1;i++){
    dif=abs(arr[i]-arr[i-1]);
    if(dif<m){
        m=dif;
        n1=i;
        n2=i+1;
    }
}
cout<< n1+1 << " " << n2+1<<endl;



}