#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        bool found = false;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num == k){
                found = true;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        done:;

    }
    return 0;
}
