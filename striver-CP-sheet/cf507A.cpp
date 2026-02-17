#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    priority_queue<pair<int,int>,vector<pair<int, int>>,greater<>> pq;
    int i = 1;
    for(int j=0;j<n;j++){
        int num;
        cin>>num;
        pq.push({num,i++});
    }

    priority_queue<int,vector<int>,greater<>> ans;
    while(!pq.empty() && k > 0 && pq.top().first <= k){
        k-= pq.top().first;
        ans.push(pq.top().second);
        pq.pop();
    }
    cout<<ans.size()<<endl;
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    return 0;


}