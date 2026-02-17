#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int l,a,b;
        cin>>l>>a>>b;
        set<int> st;
        int maxi = 0;
        while(!st.count(a)){
            st.insert(a);
            maxi = max(maxi,a);
            a = (a+b)%l;
        }
        cout<<maxi<<endl;
    }
    return 0;
}