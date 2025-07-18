#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<pair<unsigned long long, unsigned long long>> pts(n);
        set<pair<unsigned long long, unsigned long long>> ptset;
        for(int i = 0; i < n; i++) {
            cin >> pts[i].first >> pts[i].second;
            ptset.insert(pts[i]);
        }
        unsigned long long min_area = ULLONG_MAX;
        // Try moving each monster to each empty cell among the 4 corners of the bounding box
        vector<unsigned long long> Xs, Ys;
        for (auto& p : pts) {
            Xs.push_back(p.first);
            Ys.push_back(p.second);
        }
        sort(Xs.begin(), Xs.end());
        sort(Ys.begin(), Ys.end());
        vector<pair<unsigned long long, unsigned long long>> corners = {
            {Xs[0], Ys[0]}, {Xs[0], Ys.back()},
            {Xs.back(), Ys[0]}, {Xs.back(), Ys.back()}
        };
        for (int i = 0; i < n; ++i) {
            for (auto& corner : corners) {
                if (ptset.count(corner) && corner != pts[i]) continue; // can't overlap
                vector<unsigned long long> tx, ty;
                for (int j = 0; j < n; ++j) {
                    if (j == i) {
                        tx.push_back(corner.first);
                        ty.push_back(corner.second);
                    } else {
                        tx.push_back(pts[j].first);
                        ty.push_back(pts[j].second);
                    }
                }
                unsigned long long x_min = *min_element(tx.begin(), tx.end());
                unsigned long long x_max = *max_element(tx.begin(), tx.end());
                unsigned long long y_min = *min_element(ty.begin(), ty.end());
                unsigned long long y_max = *max_element(ty.begin(), ty.end());
                unsigned long long area = (x_max - x_min + 1) * (y_max - y_min + 1);
                min_area = min(min_area, area);
            }
        }
        cout << min_area << endl;
    }
    return 0;
}