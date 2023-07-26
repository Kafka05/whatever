#include <bits/stdc++.h>
using namespace std;
 
int main() 
{

    int t,var=0;
    cin>>t;

    for(int i=0;i<t;i++){

        int sum,till,n;
        cin>>sum>>till>>n;

         if (sum%till==0){

             cout<<"YES"<<endl;
             cout<<sum/till<<endl;
             for(int j=0;j<sum/till;j++){

                      cout<<till<<" ";
                
            }

         }

         else {
             
           var=sum%till;

           for(int j=0;j<sum/till;j++){

                      cout<<till<<" ";
                
            }

         int p=sum/till+1;
         cout<<p<<endl;
         cout<<var;
   

         }

    }
    
}