#include<bits/stdc++.h>
using namespace std;


bool check(char a, char b){
    int u = a-'a';
    int v = b-'a';

    int one = (u+25)%26;
    int two = (u+1)%26;
    int three = (v+25)%26;
    int four = (v+1)%26;

    if(u == 0) one = -1;
    if(u == 25) two = -2;
    if(v == 0) three = -3;
    if(v == 25) four = -4;

    if(one == three || one  == four || two == three || two == four){
        return true;
    }
    return false;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i = 0;
        int j = n-1;
        while(i <= j){
            if(!check(s[i],s[j])){
                cout<<"NO"<<endl;
                goto done;
            }
            i++;
            j--;
        }
        cout<<"YES"<<endl;
        done:;
    }
    return 0;
}