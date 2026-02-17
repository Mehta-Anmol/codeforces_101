#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        // If n is even, it's always possible 
        // If n is odd, k must be odd to reach an odd total.
        if (n % 2 == 0) {
            cout << "YES" << endl;
        } else if (k % 2 != 0) {
            // n is odd and k is odd: (n-k) is even, which can be filled by 2s
            cout << "YES" << endl;
        } else {
            // n is odd and k is even: impossible to get an odd sum
            cout << "NO" << endl;
        }
    }
    return 0;
}