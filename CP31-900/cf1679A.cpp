#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n){
    if(n < 4 || n%2 == 1){
        cout<<-1<<endl;
        return;
    }
    ll maxi = n/4;
    ll mini;
    if(n%3 == 0){
        mini = n/6;
    }
    else{
        mini = (n/6)+1;
    }
    cout<<mini<<" "<<maxi<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        solve(n);
    }
    return 0;
}
