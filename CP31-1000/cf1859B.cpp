#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll> mins;
    ll least = INT_MAX;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        ll m = INT_MAX;
        ll m2 = INT_MAX;
        
        for(ll j=0;j<x;j++){
            ll a;
            cin>>a;
            least = min(least,a);
            if(a < m){
                m2 = m;
                m = a;
            }
            else if(a <= m2){
                m2 = a;
            }
        }
        mins.push_back(m2);
        
    }
    sort(mins.begin(),mins.end());
    ll ans = least;
    for(int i=1;i<mins.size();i++){
        ans+=mins[i];
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}