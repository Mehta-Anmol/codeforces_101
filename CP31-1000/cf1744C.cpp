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
        char curr;
        cin>>curr;
        string s;
        cin>>s;
        if(curr == 'g'){
            cout<<0<<endl;
            continue;
        }
        int ans = INT_MIN;
        
        s = s+s;
        int lastg = 0;
        for(int i=2*n-1;i>=0;i--){
            if(s[i] == 'g'){
                lastg = i;
                continue;
            }
            if(i < n && s[i] == curr){
                ans=  max(ans,lastg-i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}