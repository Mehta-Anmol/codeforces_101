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
        stack<char> st;
        bool alice = true;
        for(char c: s){
            if(!st.empty() && st.top() != c){
                st.pop();
                alice = !alice;
                continue;
            }
            st.push(c);
        }
        if(alice){
            cout<<"NET\n";
        }
        else{
            cout<<"DA\n";
        }
    }
    return 0;
}