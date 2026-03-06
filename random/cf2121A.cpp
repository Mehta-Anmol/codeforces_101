#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        bool left = false;
        bool right = false;
        int l = nums[0];
        int r = nums[n-1];
        long long ans = 0;
        if(l <= s){
            left = true;
            ans+= s-l;
        }
        if(r >= s){
            right = true;
            ans+= r-s;
        }
        if(right && left){
            ans+= min(s-l,r-s);
        }
        cout<<ans<<endl;

    }
    return 0;
}