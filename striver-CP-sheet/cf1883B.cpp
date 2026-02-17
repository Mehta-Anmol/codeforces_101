#include<bits/stdc++.h>
using namespace std;

bool check(string& s,int n, int k){
    unordered_map<char,int> mpp;
    for(char c: s){
        mpp[c]++;
    }
    int odd = 0;
    for(auto it: mpp){
        if(it.second%2 != 0){
            odd++;
        }
    }
    
    if(k >= odd-1){
        return true;
    }
    else{
        return false;
    }
    
}

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
        if(check(s,n,k)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}