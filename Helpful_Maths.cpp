#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> arr;
    int n = s.size();
    for(int i = 0;i<n;i++)
    {
        if(isdigit(s[i]))
        {
            arr.push_back(s[i]-'0');
        }
    }
    sort(arr.begin(),arr.end());
    int j = 0;
    for(int i=0;i<n;i++)
    {
        if(isdigit(s[i]))
        {
            s[i] = arr[j] + '0';
            j++;
        }
    }
    cout<<s;
    return 0;
}