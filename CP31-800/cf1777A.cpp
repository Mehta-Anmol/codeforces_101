#include<bits/stdc++.h>
using namespace std;

int find(vector<long long>& nums, long long n){
    int ans = 0;
    for(int i=1;i<n;i++){
        if(nums[i-1]%2 != nums[i]%2){
            continue;
        }
        else{
            ans++;
            nums[i]*= nums[i-1];
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        vector<long long> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            nums[i]%=2;
        }
        cout<<find(nums,n)<<endl;
    }
    return 0;
}