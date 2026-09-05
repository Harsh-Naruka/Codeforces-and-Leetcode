#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = -1000000000;

    while (n--) {
        int f, t;
        cin >> f >> t;

        int happiness;

        if (t <= k) {
            happiness = f;
        } else {
            happiness = f - (t - k);
        }

        ans = max(ans, happiness);
    }

    cout << ans-2;

    return 0;
}