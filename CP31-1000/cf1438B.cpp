#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//for an array of elements in the form 2^a, if we need two subarrays with equal sum, there should be a duplicate. 2^a is of the form 1000.... , so there should be atleast two equal elements in the array

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        set<ll> st;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            st.insert(x);
        }
        if(st.size() == n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}