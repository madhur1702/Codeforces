#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i]/2;
        if(a[i]<0 && a[i]%2!=0)
        {
            b[i]--;
        }
        sum += b[i];
    }
    for(int i=0;i<n && sum<0;i++)
    {
        if(a[i]%2!=0)
        {
            b[i]++;
            sum++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
