#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    long long ans = 0;
    long long prev = LLONG_MAX;
    for(int i=n-1;i>=0;i--)
    {
        long long take  = min(a[i],prev - 1);
        if(take<0) take = 0;
        ans += take;
        prev = take;
    }
    cout<<ans<<endl;
    return 0;
}
