#include <bits/stdc++.h>
using namespace std;
 
int main() 
{

    int t,min=0,flag=0;
    cin>>t;
    int a[t];

    for( int i=0;i<t;i++){

         cin>>a[i];
    }

     sort(a,a+t);
    
    min= a[0];

    for(int i=1;i<t;i++){

         if(min!=a[i]){

            cout<<a[i];
            flag++;
            break;

         }

          

    }

    if (flag==0){
        cout<<"NO";
    }

}