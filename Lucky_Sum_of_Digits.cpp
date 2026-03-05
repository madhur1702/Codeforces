#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int bestx = -1,besty = -1;
    for(int y=0;y*7<=n;y++)
    {
        int rem = n - y*7;
        if(rem%4 == 0)
        {
            int x = rem/4;
            if(bestx = -1 || x+y<bestx+besty)
            {
                bestx = x;
                besty = y;
            }
        }
    }
    if(bestx == -1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<string(bestx,'4') + string(besty,'7');
    }
    return 0;
}
