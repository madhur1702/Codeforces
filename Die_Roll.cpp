#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c = max(a,b);
    int d = 6 - c + 1;
    int total = 6;
    int g = __gcd(d,total);
    cout<<d/g<<"/"<<total/g;
    return 0;
}  
       
