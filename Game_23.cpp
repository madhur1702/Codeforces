#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m%n != 0)  
    {
        cout<<-1;
        return 0;
    }  
    int x = m/n,move = 0;
    while(x%2 == 0)
    {
        x/= 2;
        move++;
    }
    while(x%3 == 0)
    {
        x /= 3;
        move++;
    }
    if(x!=1)
    {
        cout<<-1;
    }else
    {
        cout<<move;
    }
    return 0;
}
