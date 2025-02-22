#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=h)
        {
            count += 1;
        }
        else if(a[i]>h)
        {
            count += 2;
        }
    }
    cout<<count;
    return 0;
}