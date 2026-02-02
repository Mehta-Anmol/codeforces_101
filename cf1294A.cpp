#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;

        int maxi = max({a,b,c});
        int diff = (maxi-a)+(maxi-b)+(maxi-c);
        if(diff > n){
            cout<<"NO"<<endl;
        }
        else{
            n-=diff;
            if(n == 0 || n%3 == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}