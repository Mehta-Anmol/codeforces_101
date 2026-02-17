#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s = to_string(n);
        int len = s.size();
        int f = s[0]-'0';

        long long ans = 9*(len-1);
        ans+=f;
        cout<<ans<<endl;
    }
    return 0;
}