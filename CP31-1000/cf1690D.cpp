#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans = INT_MAX;
        int white = 0;
        int i = 0;
        for(int j=0;j<n;j++){
            if(s[j] == 'W'){
                white++;
            }
            if((j-i+1) == k){
                ans = min(ans,white);
                if(s[i] == 'W'){
                    white--;
                }
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}