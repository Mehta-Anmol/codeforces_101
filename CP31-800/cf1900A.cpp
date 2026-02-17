#include<bits/stdc++.h>
using namespace std;


int find(string& s, int n){
    int count = 0;
    int maxi = 0;
    int i = 0;
    while(i < n){
        if(s[i] == '#'){
            i++;
            continue;
        }
        int num = 0;
        while(i < n && s[i] == '.'){
            count++;
            i++;
            num++;
        }
        maxi = max(maxi,num);
    }
    return maxi >= 3 ? 2 : count;
}

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
        cout<<find(s,n)<<endl;
    }
    return 0;
}