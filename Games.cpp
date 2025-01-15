#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cin>>n;
    vector<int> h(n);
    vector<int>g(n);
    for (int i = 0; i < n; i++)
    {
        cin>>h[i]>>g[i];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
             if(h[i]==g[j])
            {
                count++;
            }   
            }
        }
    }
    cout<<count;
    return 0;
} 