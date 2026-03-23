#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;
    deque<ll> q;
    
    for(ll i=0;i<n;i++){
        ll curr = 1;
        while(!q.empty() && q.back() == curr){
            curr = q.back()+1;
            q.pop_back();
        }
        q.push_back(curr);
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop_front();
    }
    return 0;
}