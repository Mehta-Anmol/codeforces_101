#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m, h;
        cin >> n >> m >> h;

        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        vector<int> temp = nums;
        vector<pair<int,int>> changes; 

        for(int i = 0; i < m; i++){
            int b, c;
            cin >> b >> c;
            b--; 

            temp[b] += c;
            changes.push_back({b, c});

            if(temp[b] > h){
                for(auto &p : changes){
                    temp[p.first] -= p.second;
                }
                changes.clear();
            }
        }

        for(int i = 0; i < n; i++){
            cout << temp[i] << " ";
        }
        cout <<endl;
    }

    return 0;
}
