#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    
    int n = s.size();
    for(int i=0;i<n;i++){
        if(i == 0 && s[i] == '9'){
            continue;
        }
        int num = s[i]-'0';
        int comp= 9-num;
        s[i] = (num > comp ? comp : num)+'0';
    }
    cout<<s<<endl;
    return 0;
}
