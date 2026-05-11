#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_fair(ll n){
    string s = to_string(n);
    int m = s.size();
    for(int i=0;i<m;i++){
        if(s[i] != '0' && n%(s[i]-'0') != 0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        while(!is_fair(n)){
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}