#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    unordered_map<int,int> mpp1,mpp2;
    int count = 0;
    for(int i=0;i<n;i++){
        count++;
        if(i == n-1 || a[i] != a[i+1]){
            mpp1[a[i]] = max(mpp1[a[i]],count);
            count = 0;
        }
    }
    count = 0;
    for(int i=0;i<n;i++){
        count++;
        if(i == n-1 || b[i] != b[i+1]){
            mpp2[b[i]] = max(mpp2[b[i]],count);
            count = 0;
        }
    }
    int ans = 0;
    for(auto it: mpp1){
        ans = max(ans,it.second + mpp2[it.first]);
    }
    for(auto it: mpp2){
        ans = max(ans,it.second + mpp1[it.first]);
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