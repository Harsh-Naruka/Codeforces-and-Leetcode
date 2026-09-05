#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string ans;

    if (n % 2 == 1) {
        // Odd length: read from middle towards left
        for (int i = n - 1; i >= 0; i -= 2) {
            ans += s[i];
        }

        for (int i = 1; i < n; i += 2) {
            ans += s[i];
        }
    }
    else {
        // Even length: read from middle towards left
        for (int i = n - 1; i >= 0; i -= 2) {
            ans += s[i];
        }

        for (int i = 0; i < n; i += 2) {
            ans += s[i];
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans;

    return 0;
}