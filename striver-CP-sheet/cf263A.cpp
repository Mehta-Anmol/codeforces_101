#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 0;
    int y = 0;
    for(int i=0;i<5;i++){
        bool found = false;
        for(int j=0;j<5;j++){
            int num;
            cin>>num;
            if(num == 1){
                x = i;
                y = j;
                found = true;
                break;
            }
        }
        if(found) break;
    }
    cout<<abs(2-x)+abs(2-y)<<endl;
    return 0;
}
