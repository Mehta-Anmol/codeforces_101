#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums(4);
    for(int i=0;i<4;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int a = nums[3]-nums[1];
    int b = nums[3]-nums[2];
    int c = nums[3]-nums[0];
    cout<<c<<" "<<b<<" "<<a<<endl;
    return 0;
}