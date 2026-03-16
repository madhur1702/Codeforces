#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int curr = 0;
        set<int> st;

        st.insert(curr);

        for(int i = 0; i < n; i++)
        {
            if(s[curr] == 'R')
                curr++;
            else
                curr--;

            st.insert(curr);
        }

        cout << st.size() << endl;
    }

    return 0;
}
