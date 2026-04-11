#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n>>p;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<ll,ll>> nums(n);
        for(int i=0;i<n;i++){
            nums[i] = {b[i],a[i]};
        }
        sort(nums.begin(),nums.end());
        ll ans = p;
        ll remaining = n-1;
        for(auto it: nums){
            ll charge = it.first;
            ll num = it.second;
            
            if(charge >= p) break;
            ll people = min(num,remaining);
            ans+= charge*people;
            remaining-= people;
            if(remaining == 0) break;
        }
        ans+= remaining*p;
        cout<<ans<<endl;
    }
    return 0;
}