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
        int mini = INT_MAX;
        int maxi = INT_MIN;
        vector<int> s,t;
        for(auto it: nums){
            mini = min(mini,it);
            maxi = max(maxi,it);
        }
        if(mini == maxi){
            cout<<-1<<endl;
            goto done;
        }
        for(auto it: nums){
            if(it == mini){
                s.push_back(it);
            }
        }
        
        for(auto it: nums){
            if(it != mini){
                t.push_back(it);
            }
        }
        cout<<s.size()<<" "<<t.size()<<endl;
        for(auto it: s){
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it: t){
            cout<<it<<" ";
        }
        cout<<endl;
        done:;

    }
    return 0;
}