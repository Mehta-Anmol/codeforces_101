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
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(nums[i],nums[j]) <= 2){
                    cout<<"YES"<<endl;
                    goto done;
                }
            }
        }
        cout<<"NO"<<endl;
        done:;
    }
    return 0;
}