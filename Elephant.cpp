#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int y;
    y = 0;
    y = x/5;
    if(x%5!=0)
    {
        y += 1;
    }
    cout<<y;
    return 0;
}
