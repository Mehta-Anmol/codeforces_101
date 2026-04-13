#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        // Store {remainder, original_index}
        vector<pair<ll, int>> nums(n);
        for (int i = 0; i < n; i++) {
            ll val;
            cin >> val;
            ll rem = val % k;
            if (rem == 0) rem = k;
            nums[i] = {rem, i + 1};
        }

        // Sorting in-place using a lambda
        sort(nums.begin(), nums.end(), [&](const pair<ll, int>& a, const pair<ll, int>& b) {
            if (a.first != b.first) {
                return a.first > b.first; // Higher remainder comes first
            }
            return a.second < b.second;   // Smaller index breaks ties
        });

        for (int i = 0; i < n; i++) {
            cout << nums[i].second << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}