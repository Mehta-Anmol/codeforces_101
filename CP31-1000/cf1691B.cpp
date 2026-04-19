#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    
    while(t--){
        ll n;
        cin>>n;
        vector<int> nums(n);
        for(ll i=0;i<n;i++){
            cin>>nums[i];
        }
        vector<vector<ll>> temp;
        ll i = 0;
        ll j = 0;
        bool no = false;
        while(j < n){
            while(j < n && nums[i] == nums[j]){
                j++;
            }
            if(i+1 == j){
                no = true;
                break;
            }
            temp.push_back({i+1,j});
            i = j;
        }
        if(no){
            cout<<-1<<endl;
            continue;
        }
        for(auto it: temp){
            int u = it[0];
            int v = it[1];
            cout<<v<<" ";
            for(int i = u;i<v;i++){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}