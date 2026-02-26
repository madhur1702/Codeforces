#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> grid(n);
    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
    }
    int top = n,bottom = -1,left = m,right = -1;
    for(int i=0;i<n;i++)
    {
        for(int j= 0;j<m;j++)
        {
            if(grid[i][j] == '*')
            {
                top = min(top,i);
                bottom = max(bottom,i);
                left = min(left,j);
                right = max(right,j);
            }
        }
    }
    for(int i = top;i<=bottom;i++)
        {
            for(int j = left;j<=right;j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }
    return 0;
}
