#include<bits/stdc++.h>
using namespace std;

void change(string& s){
    for(char& c: s){
        if(isupper(c)){
            c = tolower(c);
        }
        else{
            c = toupper(c);
        }
    }
}

int main(){
    string s;
    cin>>s;

    if(s.size() == 1 && isupper(s[0])){
        char ch = tolower(s[0]);
        cout<<ch<<endl;
        return 0;
    }
    int n = s.size();
    
    for(int i=1;i<n;i++){
        if(islower(s[i])){
            cout<<s<<endl;
            return 0;
        }
    }
    change(s);
    cout<<s<<endl;
    done:;
    return 0;

}