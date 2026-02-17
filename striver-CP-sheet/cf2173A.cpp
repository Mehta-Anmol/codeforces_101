#include<bits/stdc++.h>
using namespace std;

int find(string& s, int n, int k){
    int count = 0;
    int i = 0;
    while(i < n){
        if(s[i] == '0'){
            count++;
            i++;
        }
        else{
            i+=k+1;
        }
    }
    return count;
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
        cout<<find(s,n,k)<<endl;
    }
    return 0;
}