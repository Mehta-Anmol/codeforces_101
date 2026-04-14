#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll> nums(n);
        for(ll i=0;i<n;i++){
            cin>>nums[i];
        }
        ll ans = 0;
        ll i = 0;
        ll count = 0;
        while(i < n){
            count = 0;
            while(i < n && nums[i] > q){
                i++;
            }
            while(i < n && nums[i] <= q){
                count++;
                i++;
            }
            if(count >= k){
                ll temp = (count-k+1)*(count-k+2)/2;
                ans+= temp;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}