#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;
    cin>>n>>k>>x;
    long long total = n*(n+1)/2;
    long long mini = k*(k+1)/2;
    long long maxi = total-((n-k)*(n-k+1)/2);

    if(x >= mini && x<= maxi){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}