#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;

        if(k <= 3){
            cout<<k<<endl;
        }
        else{
            cout<< (k%2) << endl;
        }
    }
    return 0;
}