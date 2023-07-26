#include <bits/stdc++.h>
using namespace std;
int main(){

     int t,c=0,flag=0;
     cin>>t;
     string arr[t];
     string s[t];
     for(int i=0;i<t;i++){

           cin>>s[i];
           arr[i]=s[i];

     }

     for( int i=0;i<t;i++){

        for(int j=0;j<i;j++){

            if(arr[i]!=arr[j]){

               flag=0; 
                
            }
            else{
                
                flag++;
                
            }
           


        }
         if(flag==0){

            cout<<"OK"<<endl;
            

        }

        else{


           // for 
            cout<<s[i]<<flag<<endl;
           
        }

        

        flag=0;
     }

}