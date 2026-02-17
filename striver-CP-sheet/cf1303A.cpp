#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    cin.ignore();
    
    while(t--){
        string s;
        cin>>s;
        int i = 0;
        int j = s.size()-1;
        int n = s.size();
        while(i < n && s[i] == '0'){
            i++;
        }
        while(j >=0 && s[j] == '0'){
            j--;
        }
        int ans = 0;
        while(i < j){
            if(s[i] == '0'){
                ans++;
            }
            i++;
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}