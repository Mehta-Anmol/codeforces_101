#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans = "";
        int n = s.size();
        ans+=s[0];
        for(int i=1;i<n-1;i+=2){
            ans+=s[i];
        }
        ans+=s[n-1];
        cout<<ans<<endl;
    }
    return 0;
}