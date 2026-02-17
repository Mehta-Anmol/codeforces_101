#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    int kx,ky;
    cin>>kx>>ky;
    int qx,qy;
    cin>>qx>>qy;
    int count = 0;
    int x[8] = {a,a,-a,-a,b,b,-b,-b};
    int y[8] = {b,-b,b,-b,a,-a,a,-a};
    set<pair<int,int>> fromk, fromq;
    for(int i=0;i<8;i++){
        fromk.insert({kx+x[i],ky+y[i]});
        fromq.insert({qx+x[i],qy+y[i]});
    }
    for(auto& it: fromk){
        if(fromq.count(it)){
            count++;
        }
    }
    
    cout<<count<<endl;
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