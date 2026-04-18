#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, D;
    cin >> n >> D;

    vector<ll> nums(n);
    for(ll i = 0; i < n; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    ll i = 0;
    ll j = n - 1;
    ll ans = 0;

    while(i <= j){
        ll need = (D / nums[j]) + 1;  // FIXED

        if(i + need - 1 <= j){
            ans++;
            i += (need - 1); // we use (need-1) small + 1 big
            j--;
        } else {
            break;
        }
    }

    cout << ans << endl;
    return 0;
}