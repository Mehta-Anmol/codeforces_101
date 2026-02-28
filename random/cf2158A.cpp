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
        int y,r;
        cin>>y>>r;
        int sus = r+(y/2);
        sus = min(sus,n);
        cout<<sus<<endl;
    }
    return 0;
}