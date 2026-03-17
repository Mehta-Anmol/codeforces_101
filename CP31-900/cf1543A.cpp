#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b; // Use long long to prevent overflow
        cin >> a >> b;

        if (a == b) {
            cout << "0 0" << endl;
        } else {
            long long g = abs(a - b);
            
            // Moves to go down to the nearest multiple of g
            long long d = a % g;
            
            // Moves to go up to the nearest multiple of g
            long long u = g - (a % g);
            
            // The answer is the smaller of the two
            long long k = min(d, u);
            
            cout << g << " " << k << endl;
        }
    }
    return 0;
}