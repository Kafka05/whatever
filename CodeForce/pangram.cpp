#include<bits/stdc++.h>
using namespace std;
 
main()
{
    int num;
    int flag=0;
    string s;
    cin>>num;
    cin>>s;
 
    for(int i=0;i<num;i++)
    {
        s[i]=tolower(s[i]);
    }
 
   sort(s.begin(),s.end());
   for(int i=0;i<num;i++)
   {
 
       if(s[i]!=s[i+1])
       {
           flag++;
       }

   }
   if(flag==26)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }
}