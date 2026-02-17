#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        if(n < k || n%k != 0){
            cout<<1<<endl;
            cout<<n<<endl;
            continue;
        }
        int curr = 0;
        
        vector<int> moves;
        while(curr < n){
            int i = n-curr;
            while(i%k == 0){
                i--;
            }
            moves.push_back(i);
            curr += i;
            
        }
        cout<<moves.size()<<endl;
        for(int i : moves){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}