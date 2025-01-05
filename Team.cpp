#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Petya,Vasya,Tonya,number = 0,n;
    cin>>n;
    while(n>0)
    {
        cin>>Petya>>Vasya>>Tonya;
        if(Petya+Vasya+Tonya>=2)
        {
            number++;
        }
        cout<<endl;
        n--;
    }
    cout<<number;
    return 0;
}