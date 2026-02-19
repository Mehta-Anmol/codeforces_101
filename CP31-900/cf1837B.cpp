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
        char curr = s[0];
        int count = 1;
        int ans = 1;
        for(int i=1;i<n;i++){
            if(s[i] == curr){
                count++;
                ans = max(ans,count);
            }
            else{
                count = 1;
                curr=s[i];
            }
        }
        cout<<ans+1<<endl;
        
    }
    return 0;
}