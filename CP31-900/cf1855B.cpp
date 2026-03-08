#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool printed = false;
        for(long long i=1;i<=n;i++){
            if(n%i != 0){
                cout<<i-1<<endl;
                printed = true;
                break;
            }
        }
        if(!printed) cout<<n<<endl;
    }
    return 0;
}