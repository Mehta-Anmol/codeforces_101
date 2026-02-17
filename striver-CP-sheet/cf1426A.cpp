#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if(a == 1 || a == 2){
            cout<<1<<endl;
        }
        else{
            int upper = a-2;
            int count = upper/b;
            if(upper%b == 0){
                cout<<count+1<<endl;
            }
            else{
                cout<<count+2<<endl;
            }
        }

    }
    return 0;
}