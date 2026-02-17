#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int ans = 0;
    int i = 1;
    int curr = i;
    while(n > 0){
        n-=curr;
        i+=1;
        curr+=i;
        ans++;

    }
    cout<<((n == 0) ? ans : ans-1 )<<endl;
    
    
    return 0;
}