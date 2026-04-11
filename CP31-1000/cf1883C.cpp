#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n, ll k){
    ll temp = 0;
    bool need = false;
    for(ll i=0;i<n;i++){
        int x;
        cin>>x;
        ll remain = x%k;
        if(remain == 0){
            need = true;
        }
        temp = max(temp,remain);
    }
    if(need){
        cout<<0<<endl;
    }
    else{
        cout<<k-temp<<endl;
    }
}

void solveforfour(ll n, ll k){
    ll even = 0;
    bool four = false;
    ll temp =4;
    for(ll i=0;i<n;i++){
        int x;
        cin>>x;
        if(x %4 == 0){
            four = true;
        }
        temp = min(temp,k-(x%k));
        if(x%2 == 0){
            even++;
        }
    }
    if(four || even >= 2){
        cout<<0<<endl;
    }
    else if(even == 1 || temp == 1){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(k == 4 && n > 1){
            solveforfour(n,k);
        }
        else{
            solve(n,k);
        }
        
    }
    return 0;
}