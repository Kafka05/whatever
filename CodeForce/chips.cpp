#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,k;
    cin>>n>>m;
    k=(m%n);
    cout<<k<<"initial"<<endl;

    for (int i=1;i<=k;i++){

        for (int j=1;j<=4;j++){

        if (j<=k){
            k=k-j;
        }

    }
    
}
cout<<k;
}