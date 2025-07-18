#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int current_max = INT_MIN;
    vector<pair<int, int>> max_coordinates;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            if(a[i][j] > current_max) {
                current_max = a[i][j];
                max_coordinates.clear();
                max_coordinates.push_back({i, j});
            } else if (a[i][j] == current_max) {
                max_coordinates.push_back({i, j});
            }
        }
    }
    
    // Check if all maxes can be covered by a single row or column
    bool all_in_one_row = true;
    int row = max_coordinates[0].first;
    for(auto p : max_coordinates) {
        if(p.first != row) {
            all_in_one_row = false;
            break;
        }
    }
    
    bool all_in_one_col = true;
    int col = max_coordinates[0].second;
    for(auto p : max_coordinates) {
        if(p.second != col) {
            all_in_one_col = false;
            break;
        }
    }
    
    if(all_in_one_row || all_in_one_col) {
        cout << current_max - 1 << '\n';
        return;
    }
    
    // Check if there exists a row or column that covers all maxes
    bool exists_covering_row_or_col = false;
    for(int i = 0; i < n; i++) {
        bool covers_all = true;
        for(auto p : max_coordinates) {
            if(p.first != i && p.second != max_coordinates[0].second) {
                covers_all = false;
                break;
            }
        }
        if(covers_all) {
            exists_covering_row_or_col = true;
            break;
        }
    }
    
    for(int j = 0; j < m; j++) {
        bool covers_all = true;
        for(auto p : max_coordinates) {
            if(p.second != j && p.first != max_coordinates[0].first) {
                covers_all = false;
                break;
            }
        }
        if(covers_all) {
            exists_covering_row_or_col = true;
            break;
        }
    }
    
    if(exists_covering_row_or_col) {
        cout << current_max - 1 << '\n';
    } else {
        // In this case, some maxes will be decreased and some won't
        // So the new maximum will be current_max (the ones not decreased)
        // unless there's a value equal to current_max - 1 that becomes the new max
        // But since all original values are <= current_max, the max will be current_max
        cout << current_max << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}