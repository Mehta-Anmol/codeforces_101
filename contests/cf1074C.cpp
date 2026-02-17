#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long ans = 0;
       for(long long i=0;i<n;i++){
        long long x = -a[i];
        unordered_set<long long> st;
        for(long long v: a){
            st.insert(v+x);
        }
        long long mex = 0;
        while(st.count(mex)){
            mex++;
        }
        ans = max(ans,mex);
       }
       cout<<ans<<endl;
    }
    return 0;
}