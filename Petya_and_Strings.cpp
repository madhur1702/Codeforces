#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, st;
    cin >> s >> st;
    int n = s.size();
    int k = st.size();
    if (n == k)
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = (char)tolower(s[i]);
            st[i] = (char)tolower(st[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == st[i])
            {
                continue;
            }
            else
            {
                if (s[i] > st[i])
                {
                    cout<<"1";
                    return 0;
                }
                else if (s[i] < st[i])
                {
                    cout<<"-1";
                    return 0;
                }
            }
        }
    }
cout<<"0";
    return 0;
}