#include<bits/stdc++.h>
using namespace std;

bool vowel(char ch){
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    string ans = "";
    for(char c: s){
        char ch = tolower(c);
        if(vowel(ch)){
            continue;
        }
        ans+='.';
        ans+=ch;
    }
    cout<<ans<<endl;
    return 0;
}