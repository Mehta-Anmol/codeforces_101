#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--){
        ll n,m,i,j;
        cin>>n>>m>>i>>j;

        ll d1 = abs(i-1) + abs(j-1);
        ll d2 = abs(i-1) + abs(j-m);
        ll d3 = abs(i-n) + abs(j-1);
        ll d4 = abs(i-n) + abs(j-m);

        ll maxi = max({d1,d2,d3,d4});

        if(maxi == d1) cout<<"1 1 "<<n<<" "<<m<<"\n";
        else if(maxi == d2) cout<<"1 "<<m<<" "<<n<<" 1\n";
        else if(maxi == d3) cout<<n<<" 1 1 "<<m<<"\n";
        else cout<<n<<" "<<m<<" 1 1\n";
    }

    return 0;
}