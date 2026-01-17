#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;

    int n = s.size();
    int len = 0;
    int start = 0;
    for(int i=0;i<n;i++){
        int j = i;
        int k = i;
        while(j >=0 && k < n && s[j] == s[k]){
            if(k-j+1 > len){
                len = k-j+1;
                start = j;
            }
            j--;
            k++;
        }
        j = i;
        k = i+1;
        while(j >=0 && k < n && s[j] == s[k]){
            if(k-j+1 > len){
                len = k-j+1;
                start = j;
            }
            j--;
            k++;
        }
    }
    cout<<s.substr(start,len)<<endl;
    return 0;
    
}