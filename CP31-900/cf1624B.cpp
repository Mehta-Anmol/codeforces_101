#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        bool check = false;

        if((2*b-c)%a == 0){
            if((2*b-c)/a > 0){
                check = true;
            }
        }
        if((2*b-a)%c == 0){
            if((2*b-a)/c > 0){
                check = true;
            }
        }
        if((c+a)%(2*b) == 0){
            check = true;
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
    
}