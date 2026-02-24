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
        vector<int> a(n);
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        bool check = true;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2 == a[i+1]%2)
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
