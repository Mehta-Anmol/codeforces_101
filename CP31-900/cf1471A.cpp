#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll maxi = 0;
        ll mini = 0;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            mini += a;
            
            ll b = (a+x-1)/x;
            maxi+=b;
            
        }
        mini = (mini+x-1)/x;
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}
