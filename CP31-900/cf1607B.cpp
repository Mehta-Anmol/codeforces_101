#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    
    while(t--){
        ll x,n;
        cin>>x>>n;
    
        ll rem = n%4;
        for(int i=0;i<rem;i++){
            if(x%2 == 0){
                x-= (n-rem+i+1);
            }
            else{
                x+= (n-rem+i+1);
            }
        }
        cout<<x<<endl;
    }
    return 0;
    
}