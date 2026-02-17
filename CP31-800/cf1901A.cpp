#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        int start = 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            int dist = nums[i]-start;
            maxi = max(maxi,dist);
            start = nums[i];
        }
        int fin = 2*(x-start);
        maxi = max(maxi,fin);
        cout<<maxi<<endl;
    }
    return 0;
    
}