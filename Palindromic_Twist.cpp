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
        bool found = true;
        for(int i=0;i<n;i++)
        {
            int diff = abs(s[i] - s[n-i-1]);
            if(diff!=0 && diff!=2)
            {
                found = false;
                break;
            }
        }
        if(found)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
