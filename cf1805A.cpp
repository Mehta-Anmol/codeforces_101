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
        int xo = 0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            xo^=num;
        }
        if (n % 2 == 0 && xo != 0) {
            cout << -1 << "\n";
        } else {
            cout << xo << "\n";
        }
        
        
    }
    return 0;
}