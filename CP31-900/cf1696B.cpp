#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            // start of a non-zero segment
            if (a[i] != 0 && (i == 0 || a[i - 1] == 0)) {
                ans++;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
