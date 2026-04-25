#include<bits/stdc++.h>
using namespace std;

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
        stack<char> st;
        for(char c: s){
            if(c == '('){
                st.push(c);
            }
            else{
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
        }
        int ans = st.size()/2;
        cout<<ans<<endl;
    }
    return 0;
}