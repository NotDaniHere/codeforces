#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
#define cases int _; cin >> _; while(_--)
typedef long long ll;
typedef unsigned long long uint;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;

void solve() {
    int a; cin >> a;
    vector<vector<int>> A(a, vector<int>(a));
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            cin >> A[i][j];
        }
    }

    int ans = 0;

    // Process MAIN DIAGONALS (top-left to bottom-right)
    // Start from first row
    for(int i = 0; i < a; i++) {
        int x = 0, y = i;
        int min_number = 0;
        while(x < a && y < a) {
            if(A[x][y] < 0) min_number = min(min_number, A[x][y]);
            x++; y++;
        }
        ans -= min_number;
    }
    // Start from first column (excluding the main diagonal)
    for(int i = 1; i < a; i++) {
        int x = i, y = 0;
        int min_number = 0;
        while(x < a && y < a) {
            if(A[x][y] < 0) min_number = min(min_number, A[x][y]);
            x++; y++;
        }
        ans -= min_number;
    }

    cout << ans << '\n';
}

int main() {
    cases {
        solve();
    }
    return 0;
}