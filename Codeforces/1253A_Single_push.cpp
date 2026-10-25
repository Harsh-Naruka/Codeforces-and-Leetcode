
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        bool check = true;
        int l = -1, r = -1, k = 0;

        for (int i = 0; i < n; i++) {
            if (b[i] < a[i]) {
                check = false;
                break;
            }

            if (b[i] > a[i]) {
                if (l == -1) {
                    l = i;
                    k = b[i] - a[i];
                }
                r = i;
            }
        }

        if (check && l != -1) {
            for (int i = l; i <= r; i++) {
                if (b[i] - a[i] != k) {
                    check = false;
                    break;
                }
            }
        }

        cout << (check ? "YES" : "NO") << '\n';
    }

    return 0;
}
