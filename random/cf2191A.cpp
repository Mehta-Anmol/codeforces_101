#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums, int n){
    vector<int> ans(n);
    int curr = 0;
    for(int i=0;i<n;i++){
        int num = nums[i]-1;
        ans[num] = curr;
        curr = 1-curr;
    }
    for(int i=1;i<n;i++){
        if(ans[i] == ans[i-1]){
            return false;
        }
    }
    return true;
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
        if(check(nums,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}