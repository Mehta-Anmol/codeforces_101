#include<bits/stdc++.h>
using namespace std;

int get_base(int x){
    while(x%2 == 0)x/=2;
    return x;
}

bool check(vector<int>& nums, int n){
    bool ok = true;
    for(int i=1;i<=n;i++){
        int val = nums[i-1];
        if(get_base(val) != get_base(i)){
            ok = false;
        }
    }
    return ok;
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

        if(check(nums,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

