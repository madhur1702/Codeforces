#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string p;
        cin>>p;
        string h;
        cin>>h;
        bool found = false;
        sort(p.begin(),p.end());
        int m = p.size();
        for(int i = 0;(i+m)<=h.size();i++)
        {
            string temp = h.substr(i,m);
            sort(temp.begin(),temp.end());
            if(temp == p)
            {
                found = true;
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
