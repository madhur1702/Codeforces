#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> suffixMax(n);
        suffixMax[n-1] = a[n-1];

        for(int i = n-2; i >= 0; i--)
            suffixMax[i] = max(a[i], suffixMax[i+1]);

        for(int i = 0; i < n; i++)
        {
            if(suffixMax[i] > a[i])
            {
                int target = suffixMax[i];
                int pos;

                for(int j = n-1; j >= i; j--)
                {
                    if(a[j] == target)
                    {
                        pos = j;
                        break;
                    }
                }

                reverse(a.begin()+i, a.begin()+pos+1);
                break;
            }
        }

        for(int x : a)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
