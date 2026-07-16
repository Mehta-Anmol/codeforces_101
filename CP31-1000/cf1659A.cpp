#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int gaps = b+1;
        int each = r/gaps;
        int extra = r%gaps;
        string ans = "";
        while(b > 0){
            int curr = (extra > 0) ? each+1 : each;
            string temp = string(curr,'R');
            ans+=temp;
            ans+= 'B';
            extra--;
            b--;
            r-=curr;
        }
        if(r > 0){
            string s = string(r,'R');
            ans+=s;
        }
        cout<<ans<<endl;
    }
    return 0;
}