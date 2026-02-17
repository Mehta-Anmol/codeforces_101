#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int maxi = INT_MIN;
    int curr = 0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        curr-=a;
        curr+=b;
        maxi = max(maxi,curr);
    }
    cout<<maxi<<endl;
    return 0;
    

}