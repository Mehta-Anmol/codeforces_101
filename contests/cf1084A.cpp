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
        unordered_map<int,int> mpp;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            mpp[num]++;
            maxi = max(maxi,num);
        }
        cout<<mpp[maxi]<<endl;
    }
    return 0;
}