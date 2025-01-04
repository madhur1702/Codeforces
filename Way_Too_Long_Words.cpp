#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        int size = s[i].size();
        if (size > 10)
        {
            cout << s[i][0] << (size - 2) << s[i][size - 1]<<endl;
        }
        else
        {
            cout << s[i]<<endl;
        }
    }
    return 0;
}