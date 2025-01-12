#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    long long x, n;
    cin >> x >> n;

    int jump = n % 4;
    long long tot_jump = (n / 4) * 4 + 1;

    for (int i = 1; i <= jump; i++) {
        if (x % 2 == 0) {
            x -= tot_jump;
        } else {
            x += tot_jump;
        }
        tot_jump++;
    }

    cout << x << endl;  // Output the result of x after processing the jumps
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
