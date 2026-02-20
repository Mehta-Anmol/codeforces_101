#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,k;
    cin>>n>>m>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int l = nums[n-1];
    int s = nums[n-2];

    long long fullset = m/(k+1);
    long long remaining = m%(k+1);
    long long large = fullset*k+remaining;
    long long second = fullset;
    cout<<(large*l)+(second*s)<<endl;
    return 0;
}