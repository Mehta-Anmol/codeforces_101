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
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        unordered_map<int,int> mpp;
        for(int i=1;i<=6;i++){
            mpp[i] = 7-i;
        }
        int i=0;
        int count = 0;
        while(i < n-1){
            int num = nums[i];
            int nxt = nums[i+1];
            if(num == nxt || nxt == mpp[num]){
                count++;
                i+=2;
            }
            else{
                i++;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}

