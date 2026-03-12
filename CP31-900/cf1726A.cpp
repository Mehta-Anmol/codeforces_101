#include<bits/stdc++.h>
using namespace std;

#define ll long long

/*

you can rotate the array and need to find the max of nums[n-1]-nums[0]

when you rotate the subsegment of array where nums[n-1] and nums[0] is not included, this rotation is not going to have any effect on our answer.

now we have three types of operations remaining.
1. only include the nums[0], that means that nums[n-1] is fixed.In this case, just calculate the min(i=0 -> i=n-2).

2. only include the nums[n-1], that means that the nums[0] is fixed. In this case, just calculate the max(i=1 -> i=n-1).

3. Include both.In this case, we need to check all ccombinations of nums[n-1] and nums[0] in all the rotation, anti-clockwise.
lets say we have 
a1,a2,a3,a4,a5 as array. if we rotate , the combinations will be:
a1 a2 a3 a4 a5 -> a5-a1
a2 a3 a4 a5 a1 -> a1-a2
a3 a4 a5 a1 a2 -> a2-a3
a4 a5 a1 a2 a3 -> a3-a4
a5 a1 a2 a3 a4 -> a4-a5

the pattern is -> a[i]-a[i+1]

*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> nums(n);
        ll maxi = LLONG_MIN;
        ll mini = LLONG_MAX;
        ll ans = 0;
        for(ll i=0;i<n;i++){
            cin>>nums[i];
        }
        for(ll i=0;i<n-1;i++){
            mini = min(mini,nums[i]);
        }
        ans = max(ans,nums[n-1]-mini);
        
        for(ll i=1;i<n;i++){
            maxi = max(maxi,nums[i]);
        }
        ans = max(ans,maxi-nums[0]);
        ll temp =nums[n-1]-nums[0];
        for(int i=0;i<n-1;i++){
            temp = max(temp,nums[i]-nums[i+1]);
        }
        ans = max(ans,temp);
        cout<<ans<<endl;
        
        
    }
    return 0;
}