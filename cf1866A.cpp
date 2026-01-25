#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    bool zero = false;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num == 0){
            cout<<0<<endl;
            return 0;
        }
        mini = min(mini,abs(num)-0);

    }
    cout<<abs(mini)<<endl;
    
    return 0;
}
