#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totalDrink = k*l;
    int slices = c*d;
    int drink = totalDrink/nl;
    int salts = p/np;

    int toast = min({slices,drink,salts});
    toast/=n;

    cout<<toast<<endl;
    return 0;
}