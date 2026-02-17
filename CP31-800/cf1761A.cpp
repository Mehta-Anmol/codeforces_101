#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        int i = a;
        int j = n-1-b;

        int diff = j-i+1;
        
        if((n == a && n == b) || diff >= 2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}