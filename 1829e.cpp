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
int n,m;
vector<vector<int>> grid;
vector<vector<bool>> vis;
int current_sum, max_sum;
void dfs(int i, int j) {
    if(i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || grid[i][j] == 0) return;
    current_sum += grid[i][j];
    vis[i][j] = true;
    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j-1);
    dfs(i, j+1);
}
void solve() {
    cin >> n >> m;
    grid.assign(n, vector<int>(m, 0));
    vis.assign(n, vector<bool>(m, false));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] != 0 && !vis[i][j]) {
                dfs(i, j);
                max_sum = max(current_sum, max_sum);
                current_sum = 0;
            }
        }
    }
    cout << max_sum << '\n';
    max_sum = 0; current_sum = 0;
    return;
}


int main() {
    cases {
        solve();
    }

    return 0;
}