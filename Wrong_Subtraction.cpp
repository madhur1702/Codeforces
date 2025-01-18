#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for (int i = 0; i < k; i++)
    {
        int lastdigit = n%10;
        if(lastdigit>0)
        {
            n = n - 1;
        }
        else if(lastdigit == 0)
        {
            n = n/10;
        }
    }
    cout<<n;
    return 0;
}