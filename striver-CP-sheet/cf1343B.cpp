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
        int div = n/2;
        if(div%2 != 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int num = 2;
            long long evensum = 0;
            for(int i=0;i<div;i++){
                cout<<num<<" ";
                evensum+=num;
                num+=2;
            }
            num = 1;
            for(int i=0;i<div-1;i++){
                cout<<num<<" ";
                evensum-=num;
                num+=2;
            }
            cout<<evensum;
        }
        cout<<endl;
    }
    return 0;
}