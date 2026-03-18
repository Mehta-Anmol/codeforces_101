#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    int m = n * k;
    vector<ll> nums(m);
    for (int i = 0; i < m; i++) {
        cin >> nums[i];
    }

    ll ans = 0;
    // The number of elements to the right of the median in each group
    int step = n / 2; 
    
    // We start from the end and pick k medians
    // The index of the first median (from the right) is m - 1 - step
    int current = m - 1 - step;
    
    for (int count = 0; count < k; count++) {
        ans += nums[current];
        current -= (step + 1); // Move to the next median position
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}