#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, r;
    cin>>k>>r;

    int count = 1;
    while(true){
        long long num = k*count;
        if(num%10 == 0 || num%10 == r){
            cout<<count<<endl;
            break;
        }
        count++;
    }
    return 0;
}