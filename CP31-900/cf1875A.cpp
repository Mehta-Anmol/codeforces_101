#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        long long ans = b;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            ans+= min(a-1,num); //for every bomb we can add min(a-1,xi);
            //every time it goes till 1 and then taken up to either a or +xi, where a-1 or xi operations are added.

        }
        cout<<ans<<endl;
    }
    return 0;
}