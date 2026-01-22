#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b;
    cin>>a>>b;

    int count = 0;
    while(a <= b){
        count++;
        a*=3;
        b*=2;
    }
    cout<<count<<endl;
    return 0;
}