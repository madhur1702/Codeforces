#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
    if(n<=1)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<(n-1)/2<<endl;
    }

    }
    return 0;
}
