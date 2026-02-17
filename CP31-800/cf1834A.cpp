#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int neg = 0;
        int pos = 0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num == 1) pos++;
            else neg++;
        }
        int ans = 0;
        if(neg%2 != 0){
            neg--;
            pos++;
            ans++;
        }
        while(neg > pos){
            neg-=2;
            pos+=2;
            ans+=2;
        }
        cout<<ans<<endl;

    }
    return 0;
}
