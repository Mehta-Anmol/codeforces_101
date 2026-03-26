#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll p,n;
    cin>>p>>n;
    unordered_set<ll> st;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        x = x%p;
        if(st.count(x)){
            cout<<i<<endl;
            return 0;
        }
        st.insert(x);
    }
    cout<<-1<<endl;
    return 0;
    
}