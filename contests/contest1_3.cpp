#include<bits/stdc++.h>
using namespace std;


int check(int n, int k){
    if(k > n) return -1;
    int time = 0;

    while (k < n) {
        if (2 * k <= n)
            k = 2 * k;
        else
            k = 2 * k - 1;
        time++;
    }

    return (k == n) ? time : -1;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;;
        cout<<check(n,k)<<endl;
    }
    return 0;
}