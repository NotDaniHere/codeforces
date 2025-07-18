#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;

bool isPerfectSquare(ll x) {
    if (x <= 0) 
        return false;
    ll root = sqrt(x);
    return (root * root == x);
}

void solve() {
    int n;
    cin >> n;
    ll total = (ll)n * (n + 1) / 2;
    if (isPerfectSquare(total)) {
        cout << "-1\n";
        return;
    }

    if (n == 1) {
        cout << "-1\n";
        return;
    }

    vector<int> res = {2, 1};
    if (n == 2) {
        cout << "2 1\n";
        return;
    }

    set<int> avail;
    for (int i = 3; i <= n; i++) {
        avail.insert(i);
    }

    ll current_sum = 3;

    while (!avail.empty()) {
        bool found = false;
        for (auto it = avail.begin(); it != avail.end(); ) {
            int x = *it;
            ll next_sum = current_sum + x;
            if (!isPerfectSquare(next_sum)) {
                res.push_back(x);
                current_sum = next_sum;
                it = avail.erase(it);
                found = true;
                break;
            } else {
                it++;
            }
        }
        if (!found) {
            cout << "-1\n";
            return;
        }
    }

    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
        if (i < res.size() - 1) 
            cout << ' ';
    }
    cout << '\n';
}

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        solve();
    }
    return 0;
}