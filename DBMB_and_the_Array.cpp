#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,x;
        cin>>n>>s>>x;
        int sum = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(sum>s)
        {
            cout<<"NO"<<endl;
        }else
        {
            int b = s - sum;
            if(sum%x == 0)
            {
                cout<<"YES"<<endl;
            }else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
