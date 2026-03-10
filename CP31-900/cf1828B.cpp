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
        vector<int> nums(n+1);
        nums[0] =0;
        for(int i=1;i<=n;i++){
            cin>>nums[i];
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
            int diff = abs(nums[i]-i);
            if(diff != 0){
                ans = __gcd(ans,diff);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}