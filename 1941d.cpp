#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
#define pb push_back
#define cases int _; cin >> _; while(_--)
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;

void solve() {
    int n, m, x;
    cin >> n >> m >> x;
    
    vector<int> nodes = {x - 1};
    
    for(int i = 0; i < m; i++) {
        int dist; char c;
        cin >> dist >> c;
        set<int> new_nodes;
        
        if(c == '?') {
            for(auto j : nodes) {
                int clockwise = (j + dist) % n;
                int counter_clockwise = (j - dist + n) % n;
                new_nodes.insert(clockwise);
                new_nodes.insert(counter_clockwise);
            }
        } else if(c == '0') {
            for(auto j : nodes) {
                int clockwise = (j + dist) % n;
                new_nodes.insert(clockwise);
            }
        } else { 
            for(auto j : nodes) {
                int counter_clockwise = (j - dist + n) % n;
                new_nodes.insert(counter_clockwise);
            }
        }
        nodes.assign(new_nodes.begin(), new_nodes.end());
    }

    set<int> result;
    for(auto node : nodes) {
        result.insert(node + 1); 
    }
    
    cout << result.size() << '\n';
    for(auto node : result) {
        cout << node << ' ';
    }
    cout << '\n';
}

int main() {
    cases solve();
    return 0;
}