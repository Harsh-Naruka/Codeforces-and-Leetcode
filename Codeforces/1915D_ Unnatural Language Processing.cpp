#include <iostream>
#include <string>
using namespace std;

bool vowel(char c) {
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

        string a;

        for (int i = 0; i < n; ) {

            // Take C and V
            a += s[i];
            a += s[i + 1];

            // Check whether we need CVC
            if (i + 3 < n &&
                !vowel(s[i + 2]) &&
                !vowel(s[i + 3])) {

                a += s[i + 2];
                a += '.';
                i += 3;
            }
            else {
                a += '.';
                i += 2;
            }
        }

        // Remove the final dot
        a.pop_back();

        cout << a << '\n';
    }

    return 0;
}