#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(vector<ll>& nums, ll n){
    
    for(int i=1;i<n-1;i++){
        if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

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
        solve(nums,n);
    }
    return 0;
    
}