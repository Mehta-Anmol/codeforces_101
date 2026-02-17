#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    getline(cin,s);

    for(int i=0;i<5;i++){
        string k;
        cin>>k;

        if(s[0] == k[0] || s[1] == k[1]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    
    return 0;
}