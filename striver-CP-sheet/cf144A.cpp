#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int mini = INT_MAX;
    int minidx = 0;
    int maxi = INT_MIN;
    int maxidx = 0;
    for(int i=0;i<n;i++){
        if(nums[i] <= mini){
            mini = nums[i];
            minidx = i;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(nums[i] >= maxi){
            maxi = nums[i];
            maxidx = i;
        }
    }
    int ans = maxidx+(n-1-minidx);

    if(minidx < maxidx){
        ans--;
    }
    cout<<ans<<endl;
    return 0;
}