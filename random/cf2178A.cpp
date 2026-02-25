#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        unordered_map<char,int> mpp;
        for(char c:s){
            mpp[c]++;
        }
        if(mpp['Y'] > 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}