#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
		for (int i = 0; i < t; i++) {
 
			int array[3];
 
			for (int j = 0; j < 3; j++) {
 
				cin>>array[j];
 
			}
			sort(array,array+3);
			
			if (array[0]+array[1]==array[2]) {
				cout<<"Yes"<<endl;
			}
			else cout<<"no"<<endl;
 
        }

}