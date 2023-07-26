#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n;
	while(n--){
		long long m,s,r,first,rem,mid;
		cin>>m>>s>>r;
		first =s-r;
		rem=(r%(m-1));
		mid=(r/(m-1));
		cout<<first<<" ";
		for(int i=0;i<m;i++){
			if(rem>0){
				cout<<mid+1<<" ";
				rem--;
			}
			else cout<<mid<<" ";

		}
		cout<<endl;



	
	}



	return 0;
}