#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int ans = n;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                int len = max(i + 1, n - i);
                ans = max(ans, 2 * len);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
