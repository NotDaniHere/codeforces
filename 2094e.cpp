#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int _; cin >> _;
    while(_--) {
        int n; cin >> n;
        vector<int> arr(n);
        vector<int> bit_counts(32, 0);
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            for(int b = 0; b < 32; b++) {
                if(arr[i] & (1 << b)) bit_counts[b]++;
            }
        }
        
        ull max_sum = 0;
        for(int i = 0; i < n; i++) {
            ull current_sum = 0;
            for(int b = 0; b < 32; b++) {
                int set_bits = (arr[i] & (1 << b)) ? bit_counts[b] : 0;
                int clear_bits = n - bit_counts[b];
                if(arr[i] & (1 << b)) {
                    current_sum += (ull)(clear_bits) * (1ULL << b);
                } else {
                    current_sum += (ull)(bit_counts[b]) * (1ULL << b);
                }
            }
            max_sum = max(max_sum, current_sum);
        }
        cout << max_sum << '\n';
    }
    return 0;
}