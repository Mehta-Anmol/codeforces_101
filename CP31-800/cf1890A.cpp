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
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            mpp[num]++;
        }
        if(mpp.size() > 2){
            cout<<"NO"<<endl;
        }
        else if(mpp.size() < 2){
            cout<<"YES"<<endl;
        }
        else{
            int diff = 0;
            for(auto it:mpp){
                diff = abs(diff-it.second);
            }
            if(diff <= 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}