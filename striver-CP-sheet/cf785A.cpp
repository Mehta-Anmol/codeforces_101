#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    cin.ignore();

    unordered_map<string,int> mpp;
    mpp["Tetrahedron"] = 4;
    mpp["Cube"] = 6;
    mpp["Octahedron"] = 8;
    mpp["Dodecahedron"] = 12;
    mpp["Icosahedron"] = 20;

    long long ans = 0;
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        ans+= mpp[s];
    }
    cout<<ans<<endl;
    return 0;
}