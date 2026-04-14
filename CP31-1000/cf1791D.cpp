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
        string s;
        cin>>s;
        unordered_map<char,int> mpp1,mpp2;
        for(auto c: s){
            mpp1[c]++;
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            char c = s[i];
            mpp2[c]++;
            mpp1[c]--;
            if(mpp1[c] == 0){
                mpp1.erase(c);
            }
            int temp = (int)(mpp1.size()+mpp2.size());
            ans = max(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}