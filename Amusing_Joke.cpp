#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    string st;
    cin>>st;
    string ts = s+t;
    sort(ts.begin(),ts.end());
    sort(st.begin(),st.end());
    if(ts == st)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
