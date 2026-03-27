#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<vector<int>> nums(n,vector<int>(n));
    for(int i=0;i<n;i++){
        nums[i][0] = 1;
        nums[0][i] = 1;
    }
    int ans = 1;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            nums[i][j] = nums[i-1][j]+nums[i][j-1];
            ans = max(ans,nums[i][j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}