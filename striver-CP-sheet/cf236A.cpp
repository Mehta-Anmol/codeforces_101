#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin,s);

    set<char> st;

    for(char c: s){
        st.insert(c);
    }
    bool girl = (st.size()%2 == 0);
    if(girl){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}