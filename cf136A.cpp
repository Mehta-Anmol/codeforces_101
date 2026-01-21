#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    
    unordered_map<int,int> mpp;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        mpp[num] = i;
    }
    for(int i=1;i<=n;i++){
        cout<<mpp[i]<<" ";
    }
    return 0;
}