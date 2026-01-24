#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mpp;
    for(char c: s){
        mpp[c]++;
    }
    string ans = "";
    for(auto& it: mpp){
        char c = it.first;
        int k = it.second;
        if(k%n != 0){
            cout<<-1<<endl;
            return 0;
        }
        int m = k/n;
        for(int i=0;i<m;i++){
            ans+= c;
        }

    }
    string res = "";
    for(int i=0;i<n;i++){
        res+= ans;
    }
    cout<<res<<endl;
    
    return 0;
}