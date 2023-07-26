#include <iostream>
using namespace std;
 
int main() {
 
  int n,s,r,t;
  int max=0;
  int m;
  int minus;
  
 
  cin>>t;
 
  for (int j=0;j<t;j++){
 
 
  cin>>n>>s>>r;
  max=s-r;
  cout<<max<<" ";
 
  if((r%(n-1))==0){
 
  for(int i=1;i<=n-1;i++){
 
         cout<<(r/(n-1))<<" ";
 
  }
  
  }
  else {
    int m= r%(n-1)+(r/(n-1));
    if (m>max){
        minus=m-max;
        cout<<m-minus<<" "<<(r/(n-1)+minus)<<" ";
         for(int i=3;i<=n-1;i++){
 
         cout<<(r/(n-1))<<" ";
 
  }
    }
    else {
    cout<<m<<" ";
    
 for(int i=2;i<=n-1;i++){
 
         cout<<(r/(n-1))<<" ";
 
  }
  
 
  }
  }
  
  }
 
  
  return 0;
}