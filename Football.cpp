#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string name[n];
    for(int i=0;i<n;i++)
    {
        cin>>name[i];
    }
    if(n==1)
    {
        cout<<name[0];
        return 0;
    }
    string team1,team2;
    int cnt = 0;
    int cnt1 = 0;
    team1 = name[0];
    for(int i=0;i<n;i++)
    {
        if(team1 == name[i])
        {
            cnt++;
        }
        else
        {if(cnt1==0)
            {
                team2 = name[i];
            }
            cnt1++;
        }
    }
    if(cnt>cnt1)
    {
        cout<<team1;
    }
    else{
        cout<<team2;
    }

    return 0;
}
