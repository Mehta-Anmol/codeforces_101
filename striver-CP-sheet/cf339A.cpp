#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin,s);
    vector<int> nums(4,0);
    for(char c: s){
        if(isdigit(c)){
            nums[c-'0']++;
        }
    }
    string ans = "";
    for(int i=1;i<4;i++){
        int k = nums[i];
        char ch = i+'0';
        for(int j=0;j<k;j++){
            ans+= (ch);
            ans+='+';
        }
    }
    ans.pop_back();
    cout<<ans<<endl;


    return 0;
}