#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int count =0;
    count+= n/5;
    

    if(n%5 == 0){
        cout<<count<<endl;
    }
    else{
        cout<<count+1<<endl;
    }
    
    return 0;
}