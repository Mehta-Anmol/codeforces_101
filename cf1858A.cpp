#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;

        long long first = a+(c+1)/2;
        long long second = b+(c)/2;

        if(first > second){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
        
        
    }
    return 0;
}