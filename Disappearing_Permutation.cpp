#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int sz;
    cin >> sz;
    vector<int> perm(sz + 1);
    for (int i = 1; i <= sz; i++) {
        cin >> perm[i];
    }
    
    vector<int> seq(sz + 1);
    for (int i = 1; i <= sz; i++) {
        cin >> seq[i];
    }
    
    vector<int> mapping(sz + 1, 0);
    vector<int> lengths;
    int counter = 0;
    
    for (int i = 1; i <= sz; i++) {
        if (mapping[i] != 0) continue;
        
        counter++;
        int curr = i;
        int len = 0;
        
        while (mapping[curr] == 0) {
            mapping[curr] = counter;
            len++;
            curr = perm[curr];
        }
        
        lengths.push_back(len);
    }
    
    vector<bool> visited(counter + 1, false);
    long long output = 0;
    
    for (int i = 1; i <= sz; i++) {
        int pos = seq[i];
        int idx = mapping[pos];
        
        if (!visited[idx]) {
            visited[idx] = true;
            output += lengths[idx - 1];
        }
        
        cout << output << " ";
    }
    
    cout << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tests;
    cin >> tests;
    
    while(tests--) {
        solve();
    }
    
    return 0;
}
