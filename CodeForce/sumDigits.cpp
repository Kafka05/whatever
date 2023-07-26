#include <bits/stdc++.h>
using namespace std;
int main()
{
    

        string s;
        cin >> s;
        int cnt = 0;
        while (s.size() !=1)
        {
            long long  ans = 0;
            for (auto & it : s)
            {
                ans += (it-48);
            }
            s = to_string(ans);
            cnt++;
        }
        cout << cnt;
        cout << endl;
    }

 

