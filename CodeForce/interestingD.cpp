#include<bits/stdc++.h>
using namespace std;
int main() {


    int t,day,count=0;
    cin>>t;
    long a[t];

    for(int i=0;i<t;i++){

        cin>>a[i];
    }
    cin>>day;
    long coin[day];
    for(int j=0;j<day;j++){

        cin>>coin[j];

        for(int i=0;i<t;i++){

            if(coin[j]>=a[i]){

                count++;
            }
        }
        cout<<count<<endl;
        count=0;

    }
}