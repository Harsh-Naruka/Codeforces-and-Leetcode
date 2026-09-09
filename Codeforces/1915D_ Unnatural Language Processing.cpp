#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string ans;

        int i = n - 1;

        while (i >= 0) {
            if (isVowel(s[i])) {
                // CV
                ans += s[i];
                ans += s[i - 1];
                i -= 2;
            }
            else {
                // CVC
                ans += s[i];
                ans += s[i - 1];
                ans += s[i - 2];
                i -= 3;
            }

            ans += '.';
        }

        // We built it backwards
        ans.pop_back();
        reverse(ans.begin(), ans.end());

        cout << ans << '\n';
    }

    return 0;
}