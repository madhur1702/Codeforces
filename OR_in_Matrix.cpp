#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> b(m,vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    vector<vector<int>> a(m,vector<int>(n,1));
    vector<vector<int>> c(m,vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(b[i][j] == 0)
            {
                for(int k = 0;k<n;k++)
                {
                    a[i][k] = 0;
                }
                for(int k = 0;k<m;k++)
                {
                    a[k][j] = 0;
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            int nr = 0,nc = 0;
            for(int k = 0;k<n;k++)
            {
                nr |= a[i][k];
            }
            for(int k = 0;k<m;k++)
            {
                nc |= a[k][j];
            }
            c[i][j] = nr | nc;
        }
    }
    if(b == c)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}  
