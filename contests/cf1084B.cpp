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
        bool check = true;
        for(int i=0;i+1<n;i++){
            if(nums[i] > nums[i+1]){
                check = false;
                break;
            }
        }
        if(check){
            cout<<n<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}