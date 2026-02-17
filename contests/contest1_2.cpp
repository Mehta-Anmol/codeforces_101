#include<bits/stdc++.h>
using namespace std;

int find(int s, int k, int m){
    int time = 0;
    int sand = s;
    int next = k;

    while(time < m){
        time++;

        // Flip happens first
        if(time == next){
            sand = s;
            next += k;
        }

        // Then sand falls
        if(sand > 0) sand--;
    }
    return sand;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    while(n--){
        int s,k,m;
        cin>>s>>k>>m;
        cout<<find(s,k,m)<<endl;
    }
    return 0;
}