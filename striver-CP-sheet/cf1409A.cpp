#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;

        if(a == b){
            cout<<0<<endl;
            continue;
        }
        else if(a > b){
            long long temp = a;
            a = b;
            b = temp;
        }
        long long diff = b-a;
        long long count = diff/10;
        cout<<(diff%10 == 0 ? count : count+1)<<endl;

    }
    return 0;
}