#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> d(n);
    vector<int> l(n), r(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    vector<int> low_arr(n+1);
    vector<int> high_arr(n+1);
    low_arr[0] = 0;
    high_arr[0] = 0;

    bool valid = true;
    for (int i = 0; i < n; i++) {
        if (d[i] == 0) {
            low_arr[i+1] = max(l[i], low_arr[i]);
            high_arr[i+1] = min(r[i], high_arr[i]);
        } else if (d[i] == 1) {
            low_arr[i+1] = max(l[i], low_arr[i] + 1);
            high_arr[i+1] = min(r[i], high_arr[i] + 1);
        } else {
            low_arr[i+1] = max(l[i], low_arr[i]);
            high_arr[i+1] = min(r[i], high_arr[i] + 1);
        }
        if (low_arr[i+1] > high_arr[i+1]) {
            valid = false;
            break;
        }
    }

    if (!valid) {
        cout << -1 << '\n';
        return;
    }

    int h = low_arr[n];
    for (int i = n-1; i >= 0; i--) {
        if (d[i] == -1) {
            if (h - 1 >= low_arr[i]) {
                d[i] = 1;
                h = h - 1;
            } else {
                d[i] = 0;
            }
        } else {
            h = h - d[i];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << d[i] << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}