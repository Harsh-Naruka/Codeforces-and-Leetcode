#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int best = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        int rounds = (a + m - 1) / m;
        if (rounds >= best) {   // >= so ties go to the later index
            best = rounds;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}