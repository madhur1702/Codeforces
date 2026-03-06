#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int d = 0;d<n;d++)
    {
        bool ok = true;
        for(int i=max(0,d-x);i<d;i++)
        {
            if(a[i]<a[d])
            {
                ok = false;
                break;
            }
        }
        for(int i=d+1;i<=min(n-1,d+y);i++)
        {
            if(a[i]<a[d])
            {
                ok = false;
                break;
            }
        }
        if(ok)
        {
            cout<<d+1<<endl;
            return 0;
        }
    }
    return 0;
}
