#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> nums(n);
        for(ll i=0;i<n;i++){
            cin>>nums[i];
        }
        ll s;
        cin>>s;
        s--;
        ll el = nums[s];
        ll l=0,r=0;
        for(int i=0;i<s;i++){
            if(nums[i] != el){
                l++;
                while(i < s && nums[i] != el){
                    i++;
                }
            }
        }
        for(int i=s+1;i<n;i++){
            if(nums[i] != el){
                r++;
                while(i < n && nums[i] != el){
                    i++;
                }
            }
        }
        ll ans = max(l,r);
        cout<<ans*2<<endl;

    }
    return 0;
}