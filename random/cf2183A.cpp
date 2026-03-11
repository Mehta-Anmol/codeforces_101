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
        if(nums[0] == 0 && nums[n-1] == 0){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"ALICE"<<endl;
        }
    }
    return 0;
}