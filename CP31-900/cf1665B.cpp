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
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            mpp[nums[i]]++;
        }
        int maxi = INT_MIN;
        for(auto it: mpp){
            maxi = max(maxi,it.second);
        }
        int remaining = n-maxi;
        int clone = 1;
        int swaps = 0;
        if(remaining == 0){
            cout<<0<<endl;
            goto done;
        }
        
        while(remaining > 0){
            if(maxi >= remaining){
                swaps+= remaining;
                remaining = 0;
            }
            else{
                clone++;
                swaps+= maxi;
                remaining = remaining-maxi;
                maxi*=2;
                
            }
        }
        cout<<clone+swaps<<endl;
        done:;

    }
    return 0;
}