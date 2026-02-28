#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int turn = 0;
    while (true) {
        if (turn == 0) {
            int g = gcd(a, n);
            if (g > n) {
                cout << 1 << endl;
                break;
            }
            n -= g;
            turn = 1;
        } else {
            int g = gcd(b, n);
            if (g > n) {
                cout << 0 << endl;
                break;
            }
            n -= g;
            turn = 0;
        }
    }

    return 0;
}
