#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt = 0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i] == toupper(s[i]))
        {
            cnt++;
        }
    }
    if(cnt == s.size()-1  && s[0] == toupper(s[0]))
    {
                for(int i = 0;i<s.size();i++)
        {
            s[i] = tolower(s[i]);
        }
        cout<<s<<endl;

    }
    else if(cnt == s.size()-1  && s[0] != toupper(s[0]))
    {
        s[0] = toupper(s[0]);
        for(int i = 1;i<s.size();i++)
        {
            s[i] = tolower(s[i]);
        }
        cout<<s<<endl;
    }else{
    cout<<s<<endl;
    }return 0;
}
