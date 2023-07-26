#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int t,m,r=0;
cin>>t>>m;
if (t%m==0){
  for (int i = 0; i < m; i++) {
				cout<<(t / m)<<endl;
 
			}
 
		} else {
 
			r = t % m;
 
			for (int j = 0; j < m - r; j++) {
 
				cout<<(t / m)<<endl;
 
			}
 
			for (int j = 0; j < r; j++) {
				cout<<(t / m+ 1)<<endl;
			}
 
		}
	}
 
