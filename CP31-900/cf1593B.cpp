#include<bits/stdc++.h>
using namespace std;


int solve(string s, string t){
    int n = s.size();
    int last = -1,second = -1;
    for(int i=n-1;i>=0;i--){
        if(s[i] == t[1]){
            last = i;
            break;
        }
    }
    if(last == -1) return 1e8;
    for(int i=last-1;i>=0;i--){
        if(s[i] == t[0]){
            second = i;
            break;
        }
    }
    if(second == -1) return 1e8;

    return (n-1-last)+(last-second-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        vector<string> targets = {"00","25","50","75"};

        int ans = s.size();
        for(string t: targets){
            ans = min(ans,solve(s,t));
        }
        cout<<ans<<endl;
    }
    return 0;
}