#include<bits/stdc++.h>
using namespace std;

void solve(int n,vector<int>& nums){
    int count = 0;
    for(int i=n-2;i>=0;i--){
        if(nums[i+1] == 0){
            cout<<-1<<endl;
            return;
        }
        
        while(nums[i] >= nums[i+1]){
            if(nums[i+1] == 0){
                cout<<-1<<endl;
                return;
            }
            nums[i] = nums[i]/2;
            count++;
        }
    }
    cout<<count<<endl;
    return;
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
        solve(n,nums);
    }
    return 0;
}