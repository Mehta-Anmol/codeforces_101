#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int j=n-1;
        if(b[j] > a[j]){
            a[j] = b[j];
        }
        for(int i=n-2;i>=0;i--){
            if(a[i+1] > a[i]){
                a[i] = a[i+1];
            }
            if(b[i] > a[i]){
                a[i] = b[i];
            }
        }
        vector<long long> prefix(n);
        prefix[0] = (long long)a[0];
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]+a[i];
        }
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            long long sum;
            if(l == 0){
                sum = prefix[r];

            }
            else{
                sum = prefix[r]-prefix[l-1];
            }
            cout<<sum<<" ";
            
        }
        cout<<endl;
        
    }
    
    return 0;
}
