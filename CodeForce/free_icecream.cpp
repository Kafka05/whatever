#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,sum,count=0,num=0;
    cin>>t>>sum;
   string s;
for (ll i=0;i<t;i++){
cin>>s;
ll n;
cin>>n;

    
    if(s[0]=='-'){
        if(sum>=n){
            sum=sum-n;
           // cout<<sum<<endl;
        }
        else count++;
    }
    else {
        //cout<<s[1]<<" "<< sum<<endl;
        sum=sum+n;
  //  cout<<sum<<" END"<<endl;
    }

}
cout<<sum<<" "<<count<<endl;


}