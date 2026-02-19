#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    unordered_map<char,int> hash;
    for(char c : s)
    {
        hash[c]++;
    }
    string base = "";
    for(auto it : hash)
    {
        if(it.second%k != 0)
        {
            cout<<-1;
            return 0;
        }
        base += string(it.second/k,it.first);
    }
    string res = "";
    for(int i = 0;i<k;i++)
    {
        res += base;
    }
    cout<<res;
    return 0;
}
