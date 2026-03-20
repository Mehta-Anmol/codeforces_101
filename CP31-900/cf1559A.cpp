#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> nums(n);
        for(ll i=0;i<n;i++){
            cin>>nums[i];
        }
        ll ans = nums[0];
        for(ll i=1;i<n;i++){
            ans = ans&nums[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}