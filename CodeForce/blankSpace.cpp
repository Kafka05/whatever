#include <iostream>

using namespace std;
int main()
{
	int t;
	int n;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		int max_len = 0;
		int flag = 0;
		for (int j = 0; j < n; j++) {
			int num;
			cin >> num;
			if (num == 0) {
				flag++;
			}
			else {
				flag = 0;
			}
			max_len = max(max_len, flag);
		}
		cout << max_len << endl;
	}
	return 0;
}

 	   		 	 		  			    	 				  	