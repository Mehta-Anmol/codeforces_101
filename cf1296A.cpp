#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd = 0;
        int even = 0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;

            if(num%2 != 0){
                odd++;
            }
            else{
                even++;
            }
        }
        if(odd%2 != 0){
            cout<<"YES"<<endl;
        }
        else if(even > 0 && odd > 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}