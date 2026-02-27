#include<bits/stdc++.h>
using namespace std;

bool ispower(long long n){
    if(n == 0) return false;
    if((n&(n-1)) == 0){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        if(n%2 != 0){
            cout<<"YES\n";
        }
        else{
            if(ispower(n)){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    }
    return 0;
}