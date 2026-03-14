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
        int count = 0;
        int i = 0;
        while(i < n){
            while(i < n && nums[i] == 0){
                i++;
            }
            bool check = false;
            while(i < n && nums[i] != 0){
                check = true;
                i++;
            }
            if(check) count++;
        }
        cout<<min(count,2)<<endl;
    }
    return 0;
}