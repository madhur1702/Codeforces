#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> row(n,0),col(n,0);
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>a[i][j];
            row[i] += a[i][j];
            col[j] += a[i][j];
        }
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(row[i]<col[j])
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
