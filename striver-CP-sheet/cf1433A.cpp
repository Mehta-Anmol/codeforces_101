#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    cin.ignore();
    unordered_map<int,int> mpp;
    mpp[1] = 1;
    mpp[2] = 3;
    mpp[3] = 6;
    mpp[4] = 10;
    while(t--){
        string s;
        cin>>s;
        int digit = s[0]-'0';
        int ans = (digit-1)*10 + mpp[s.size()];
        cout<<ans<<endl;
    }
    
    
    return 0;
}