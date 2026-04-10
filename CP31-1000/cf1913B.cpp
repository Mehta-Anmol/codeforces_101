#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll one = 0;
        ll zero = 0;
        for(auto ch: s){
            if(ch == '0'){
                zero++;
            }
            else{
                one++;
            }
        }
        for(auto ch: s){
            if(ch == '0' && one > 0){
                one--;
            }
            else if(ch == '1' && zero > 0){
                zero--;
            }
            else if(one == 0 || zero == 0){
                break;
            }
        }
        cout<<max(one,zero)<<endl;
    }
    return 0;
    
}