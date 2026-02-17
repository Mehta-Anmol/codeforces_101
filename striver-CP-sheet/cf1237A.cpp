#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin>>n;
    int sum = 0;

    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = floor(a[i]/2.0);
        sum+=b[i];
    }
    int need = -sum;
    for(int i=0;i<n && need > 0;i++){
        if(a[i]%2 != 0){
            b[i]++;
            need--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<endl;
    }
    return 0;

}