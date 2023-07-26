#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  t,n,m,n1,m1;
    cin>>t;
    for (int i=0;i<t;i++){
        int sum1=0,sum2=0;
        cin>>n;
        cin>>m;
        for (int j=0;j<n;j++){
            cin>>n1;
            sum1=sum1+n1;
          
        }
        for (int j=0;j<m;j++){
              cin>>m1;
            sum2=sum2+m1;
              
        }
        if (sum1<sum2){
            cout<<"Tenzing"<<endl;
        }
        else if (sum2<sum1){
             cout<<"Tsondu"<<endl;

        }
        else cout<<"Draw"<<endl;

    }
}