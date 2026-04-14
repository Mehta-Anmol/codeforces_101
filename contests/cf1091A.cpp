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
        ll sum = 0;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            sum+=x;
        }
        if((sum%2 != 0) || ((n*k) %2 == 0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}