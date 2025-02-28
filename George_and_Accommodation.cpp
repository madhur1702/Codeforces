#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int p,q;
    int count = 0;
    cin>>t;
    while(t--)
    {
        cin>>p>>q;
        if(p<=(q-2))
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}