#include <bits/stdc++.h>
using namespace std;

bool Prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    if (!Prime(m)) {
        cout << "NO";
        return 0;
    }

    for (int i = n + 1; i < m; i++) {
        if (Prime(i)) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
