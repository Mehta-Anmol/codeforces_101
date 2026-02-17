#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int space = n;

    // Upper half
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < space; j++)
            cout << "  ";

        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << "\n";
        space--;
    }

    space = 1;

    // Lower half
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < space; j++)
            cout << "  ";

        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << "\n";
        space++;
    }

    return 0;
}
