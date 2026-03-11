#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
         vector<long long> prefix(n);
        prefix[0] = (long long)nums[0];
        for(int i=1;i<n;i++){
            prefix[i] = nums[i]+prefix[i-1];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            long long remaining;
            if(l == 1){
                remaining = prefix[n-1]-(prefix[r-1]);
            }
            else{
                remaining = prefix[n-1]-(prefix[r-1]-prefix[l-2]);
            }
            bool odd1 = remaining%2 != 0;
            
            bool odd2 = false;
            if((k%2 != 0) && ((r-l+1)%2 != 0)){
                odd2 = true;
            }
            if(odd1 != odd2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            
        }
    }
   
    return 0;
}