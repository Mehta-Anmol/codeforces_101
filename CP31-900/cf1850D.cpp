#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, int n,int k){
    sort(nums.begin(),nums.end());
    int count = 1;
    int ans = 0;
    for(int i=1;i<n;i++){
        
        if(nums[i]-nums[i-1] > k){
            ans = max(ans,count);
            
            count = 0;
        }
        count++;
    }
    ans = max(ans,count);
    cout<<n-ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        solve(nums,n,k);
    }
    return 0;
}