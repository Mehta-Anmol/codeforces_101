#include<bits/stdc++.h>
using namespace std;


int find(vector<int>& nums, int n){
    int maxi = nums[0];
    for(int i=1;i<n;i++){
        maxi = max(maxi,nums[i]);
    }
    return n*maxi;
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

        cout<<find(nums,n)<<endl;
    }
    return 0;
}