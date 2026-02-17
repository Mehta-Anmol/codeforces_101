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
        int oddidx = 0;
        int evenidx = 0;
        int oddnum = 0;
        int evennum = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            int imod = i%2;
            if(imod == 0){
                evenidx++;
            }
            else{
                oddidx++;
            }
            int num;
            cin>>num;
            int nummod = num%2;
            if(nummod == 0){
                evennum++;
            }
            else{
                oddnum++;
            }
            if(imod != nummod){
                count++;
            }

        }
        if(oddidx == oddnum && evenidx == evennum && count%2 == 0){
            cout<<count/2<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}