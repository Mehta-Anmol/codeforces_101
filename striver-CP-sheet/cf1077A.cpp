#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        vector<int> p(n + 1, -1);
        set<int> unused;
        for (int i = 1; i <= n; i++)
            unused.insert(i);

        p[n] = n;
        unused.erase(n);

        for (int i = n - 1; i >= 1; i--) {
            int x = p[i + 1];

            if (x - i >= 1 && unused.count(x - i)) {
                p[i] = x - i;
            } else {
                p[i] = x + i;
            }

            unused.erase(p[i]);
        }

        for (int i = 1; i <= n; i++)
            cout << p[i] << " ";
        cout << "\n";
    }
}