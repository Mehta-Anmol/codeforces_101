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
        int m = 2*n;
        vector<int> nums(m);
        for(int i=0;i<m;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int a = (m/2)-1;
        int b = (m/2);
        cout<<nums[b]-nums[a]<<endl;
    }
    
    
    return 0;
}