#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;

        int n = s1.size();
        int m = s2.size();
        int ans = 0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        for(int i=0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int j=0;j<=m;j++){
            dp[0][j] = 0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1] ==  s2[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                    ans = max(dp[i][j],ans);
                }else{
                    dp[i][j] = 0;
                }
            }
        }
        int res = (n-ans)+(m-ans);
        cout<<res<<endl;
    }
    return 0;
}