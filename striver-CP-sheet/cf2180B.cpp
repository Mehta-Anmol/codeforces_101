#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        string s;
        cin>>s;
        for(int i=1;i<m;i++){
            string x;
            cin>>x;
            s = (s+x) > (x+s) ? (x+s) : (s+x);
        }
        cout<<s<<endl;
    }
    return 0;
}