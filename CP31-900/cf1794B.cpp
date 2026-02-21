#include<bits/stdc++.h>
using namespace std;

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
        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                nums[i]++;
            }
        }
        for(int i=0;i<n-1;i++){
            
            if (nums[i + 1] % nums[i] == 0) {
                nums[i+1]++;
                
            }
        }
        for(auto it: nums){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}