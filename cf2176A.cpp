#include<bits/stdc++.h>
using namespace std;


int find(vector<int>& nums, int n){
    int count = 0;
    int curr = nums[0];
    int i = 1;
   for(int i = 1; i < n; i++){
        if(nums[i] < curr){
            count++;     // this element can be removed
        } else {
            curr = nums[i]; // update maximum
        }
    }
    
    return count;
}

int main(){
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