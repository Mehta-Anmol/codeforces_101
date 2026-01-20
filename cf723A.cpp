#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums(3);
    cin>>nums[0]>>nums[1]>>nums[2];
    sort(nums.begin(),nums.end());
    long long total = 0;
    total+= abs(nums[1]-nums[0]);
    total+= abs(nums[1]-nums[2]);
    cout<<total<<endl;
    return 0;
}