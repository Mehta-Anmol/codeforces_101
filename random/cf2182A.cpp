#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    size_t f = s.find("2025");
    size_t si = s.find("2026");
    bool five = (f == string::npos);
    bool six = (si != string::npos);
    return (six || five);
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
        if(check(s)){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }

    }
    return 0;
}