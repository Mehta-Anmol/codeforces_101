#include<bits/stdc++.h>
using namespace std;

int func(int a,int b, int n){
    int ans = 0;
    while(true){
        if(a > n || b > n){
            break;
        }
        if(a <= b){
            
            a+=b;
        }
        else{
            b+=a;
        }
        ans++;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        cout<<func(a,b,n)<<endl;
    }


    return 0;
}