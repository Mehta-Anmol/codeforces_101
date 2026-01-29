#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        bool found = false;
        for(int i=0;i<=5;i++){
            if(x.size() < s.size()){
                x=x+x;
                continue;
            }
            int pos = x.find(s);
            if(pos != string::npos){
                cout<<i<<endl;
                found = true;
                break;
            }
            x = x+x;
        }
        if(!found){
            cout<<-1<<endl;
        }
    }
    return 0;
}
