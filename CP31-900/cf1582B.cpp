#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int one = 0;
        int zero = 0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num == 1){
                one++;
            }
            else if(num == 0){
                zero++;
            }
        }
        long long ans = pow(2,zero);
        ans*=one;
        cout<<ans<<endl;
    }
    return 0;
}