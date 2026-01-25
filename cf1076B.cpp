#include <bits/stdc++.h>
using namespace std;

int main() {
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
        vector<int> temp = nums;
        sort(temp.rbegin(),temp.rend());
        int l = -1;
        int r = -1;
        int k;
        
        for(int i=0;i<n;i++){
            if(nums[i] != temp[i]){
                l = i;
                break;
            }
        }
        int maxi;
        if(l == -1){
            goto done;
        }
        k = l;
        maxi = nums[k];
        while(k < n){
            if(nums[k] > maxi){
                maxi = nums[k];
                r = k;
            }
            k++;
        }
        reverse(nums.begin()+l,nums.begin()+r+1);
        done:;
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
