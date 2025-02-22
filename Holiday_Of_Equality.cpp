#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
        {cout<<"0";
        return 0;
}    int max = a[0];
for(int i=1;i<n;i++)
{
    if(a[i]>max)
    {
        max = a[i];
    }
}int count = 0;
for(int i=0;i<n;i++)
{
    count += (max - a[i]);
}
cout<<count;
    return 0;
}