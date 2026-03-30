#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin>>n>>m;
    ll steps = 0;
    while(m > n){
        if(m%2 == 0){
            m/=2;
        }
        else{
            m+=1;
        }
        steps++;
    }
    steps+= (n-m);
    cout<<steps<<endl;
    return 0;
}