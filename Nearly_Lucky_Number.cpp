#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        int digit = n % 10;
        n = n / 10;
        if((digit == 4)||(digit == 7))
        {
            count++;
        }
    }
    if((count==4)||(count==7))
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}