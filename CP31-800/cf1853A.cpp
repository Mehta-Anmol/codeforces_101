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
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        int mini = INT_MAX;
        for(int i=1;i<n;i++){
            int diff = nums[i]-nums[i-1];
            if(diff < 0){
                cout<<0<<endl;
                goto done;
            }
            mini = min(mini,diff);
        }
        ans = mini/2;
        ans+=1;
        cout<<ans<<endl;
        done:;
        
    }
    return 0;
}
