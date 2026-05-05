#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        
        bool zero = false;
        int mini = INT_MAX;
        ll count = 0;
        ll x = 0;
        
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                int a;
                cin>>a;
                
                int b = abs(a);
                x += b;
                
                if(a < 0){
                    count++;
                }
                if(a == 0){
                    zero = true;
                }
                
                mini = min(mini, b);
            }
        }
        
        if(count % 2 == 0 || zero){
            cout << x << endl;
        }
        else{
            cout << x - 2 * mini << endl;
        }
    }
    
    return 0;
}