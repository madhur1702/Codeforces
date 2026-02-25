#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<char>> arr(3,vector<char>(3));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int check = true;
    for(int i=0;i<2;i++)
    {
        for(int j = 0;j<3;j++)
        {
            if(arr[i][j] != arr[3-1-i][3-1-j])
            {
                check = false;
                break;
            }
        }
        if(!check)
        {
            break;
        }
    }
    if(check)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    return 0;
}
