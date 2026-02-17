#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    cin.ignore(); 
    while(t--){
        string p;
        string p_;
        getline(cin,p);
        getline(cin,p_);

        if(p_.size() < p.size()){
            cout<<"NO"<<endl;
            continue;
        }

        vector<int> cnt(26,0),win(26,0);
        int k = p.size();
        for(int i=0;i<k;i++){
            cnt[p[i]-'a']++;

        }

        for(int i=0;i<k;i++){
            win[p_[i]-'a']++;
        }
        if(cnt == win){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=k;i<p_.size();i++){
            win[p_[i]-'a']++;
            win[p_[i-k]-'a']--;
            if(cnt == win){
                cout<<"YES"<<endl;
                goto done;
            }
        }
        cout<<"No"<<endl;
        done:;
        
    }
    return 0;
}