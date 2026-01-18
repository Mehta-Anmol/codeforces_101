#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int pages;
    cin>>pages;
    vector<int> day(7);
    long long sum = 0;
    for(int i=0;i<7;i++){
        cin>>day[i];
        sum+= day[i];
    }

    if (pages % sum == 0){
        pages = sum;
    }
    
    else{
        pages %= sum;
    }
    
    for(int i=0;i<7;i++){
        if(day[i] >= pages){
            cout<<i+1<<endl;
            break;
        }
        pages-=day[i];
    }
    return 0;
}