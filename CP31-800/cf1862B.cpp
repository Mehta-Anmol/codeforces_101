#include<bits/stdc++.h>
using namespace std;


vector<int> find(vector<int>& nums, int n){
    vector<int> ans;
    ans.push_back(nums[0]);
    for(int i = 1; i < n; i++){
        if(nums[i] < nums[i-1]){
            ans.push_back(1);   // simple and correct
        }
        ans.push_back(nums[i]);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        vector<int> ans = find(nums,n);
        cout<<ans.size()<<endl;
        for(auto it: ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}