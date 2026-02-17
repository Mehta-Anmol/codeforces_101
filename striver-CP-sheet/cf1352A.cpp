#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> ans;
        string s = to_string(n);
        long long k = 1;
        int i = s.size()-1;
        while(i >=0){
            long long num = s[i]-'0';
            num*=k;
            k*=10;
            if(num > 0){
                ans.push_back(num);
            }
            i--;
        }
        cout<<ans.size()<<endl;
        for(int i: ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}