#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int c0 = count(s.begin(), s.end(), '0');
        int c1 = n - c0;

        int i = 0;
        for (; i < n; i++) {
            if (s[i] == '0') {
                if (c1 == 0) break;
                c1--;
            } else {
                if (c0 == 0) break;
                c0--;
            }
        }
        cout << n - i << "\n";
    }
    return 0;
}