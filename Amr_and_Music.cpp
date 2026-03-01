#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a.push_back({b,i+1});
    }
    int i = 0;
    vector<int> ans;
    sort(a.begin(),a.end());
    while(i<n && k>=a[i].first)
    {
            ans.push_back(a[i].second);
            k -= a[i].first;
        i++;
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
