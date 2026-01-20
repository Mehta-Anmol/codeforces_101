#include<bits/stdc++.h>
using namespace std;

bool sorted(vector<int>& nums, int n){
    for(int i=1;i<n;i++){
        if(nums[i]< nums[i-1]){
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
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        if(sorted(nums,n)){
            cout<<"YES"<<endl;
            goto done;
        }
        else{
            if(k <=1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            goto done;
        }
        done:;
    }
    return 0;
}