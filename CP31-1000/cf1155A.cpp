#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool found = false;
    for(int i=1;i<n;i++){
        if(s[i] < s[i-1]){
            cout<<"YES"<<endl;
            found = true;
            cout<<i << " "<<i+1<<endl;
            break;
        }
    }
    if(!found){
        cout<<"NO"<<endl;
    }
    return 0;
}