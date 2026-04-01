#include<bits/stdc++.h>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<char>> mat(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }

        int count = 0;
        for(int i=0;i<n-1;i++){
            if(mat[i][m-1] == 'R'){
                count++;
            }
        }
        for(int j=0;j<m-1;j++){
            if(mat[n-1][j] == 'D'){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}