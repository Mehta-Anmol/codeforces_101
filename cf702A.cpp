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

    int maxi = 1;
    int curr = 1;
    for(int i=1;i<n;i++){
        if(nums[i] > nums[i-1]){
            curr++;
            maxi = max(maxi,curr);
        }
        else{
            curr = 1;
        }
    }
    cout<<maxi<<endl;
    
    return 0;
}