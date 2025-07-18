#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
#define cases int _; cin >> _; while(_--)
#define space << ' ' << 
#define nl << '\n'
typedef long long ll;
typedef unsigned long long uint;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;

void solve() {
    int n, m; cin >> n >> m;
    vector<pi> max_coordinates;
    int current_max = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int c; cin >> c;
            if(c > current_max) {
                max_coordinates.clear();
                max_coordinates.push_back({i,j});
                current_max = c;
            } else if (c == current_max) {
                max_coordinates.push_back({i,j});
            }
            
        }
    }
    if(max_coordinates.size() <= 2) {
        cout << current_max - 1 nl;
        return;
    }
    vi A(n), B(m); fill(A.begin(), A.end(), 0); fill(B.begin(), B.end(), 0);
    for(auto k : max_coordinates) {
        A[k.first]++; B[k.second]++;
    }
    int max_a = 0, max_b = 0;
    int max1a = 0, max1b = 0;
    int counter = 0, fc = 0;
    for(auto k : A) {
        if(max_a < k) {
            max_a = k;
            max1a = counter;
        }
        counter++;
    }
    counter = 0;
    for(auto k : B) {
        if(max_b < k) {
            max_b = k;
            max1b = counter;
        }
        counter++;
    }
    int ans = current_max;
    int possible = 0;
    for(auto k : max_coordinates) {
        if(k.first != max1a && k.second != max1b) {possible++;}
    }
    if(possible <= 2) {
        cout << ans nl;
        return;
    }
    cout << ans-1 nl;
    return;

    

}
int main() {
    cases {
        solve();
    }

    return 0;
}