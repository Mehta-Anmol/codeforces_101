#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    string s;
    cin>>s;

    string ans = "";
    int i = 1;
    int j = 0;
    while(j < n){
        ans+= s[j];
        j+= i;
        i++;
    }
    cout<<ans<<endl;
    
    
    return 0;
}