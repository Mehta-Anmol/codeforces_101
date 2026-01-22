#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k,n,w;
    cin>>k>>n>>w;
    
    long long ans = 0;
    for(int i=1;i<=w;i++){
        ans+= (k*i);
    }
    cout<<(ans > n ? ans-n : 0)<<endl;
    

}