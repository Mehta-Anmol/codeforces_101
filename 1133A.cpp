#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);

    int sh= stoi(s.substr(0,2));
    int sm = stoi(s.substr(3,2));
    int eh = stoi(t.substr(0,2));
    int em = stoi(t.substr(3,2));
    int diff = (eh-sh)*60 + (em-sm);
    diff/=2;

    int rh = diff/60;
    int rm = diff%60;
    int ansh = sh+rh;
    int ansm = sm+rm;
    if(ansm >= 60){
        ansh++;
        ansm-=60;
    }
    if(ansh < 10) cout<<"0";
    cout<<ansh<<":";
    if(ansm < 10) cout<<"0";
    cout<<ansm<<endl;

    
    return 0;
}