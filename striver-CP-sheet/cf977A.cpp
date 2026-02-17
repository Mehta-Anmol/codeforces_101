#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int k;
    cin>>n>>k;

    while(k--){
        int num = n%10;
        if(num > 0){
            n-=1;
        }
        else if(num == 0){
            n/=10;
        }
    }
    cout<<n<<endl;
    return 0;
    

}