#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int h1 = stoi(s1.substr(0,2));
    int h2 = stoi(s2.substr(0,2));
    int m1 = stoi(s1.substr(3,2));
    int m2 = stoi(s2.substr(3,2));
    int start = h1*60 + m1;
    int end = h2*60 + m2;
    int mid = (start+end)/2;
    int h = mid/60;
    int m = mid%60;
    cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<endl;
    return 0;
}
