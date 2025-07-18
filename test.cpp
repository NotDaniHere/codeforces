#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi subset; // Vector to store the current subset
int n = 3; // Size of the set {0, 1, ..., n-1}

void search(int k) {
    if (k == n) {
        // Process the subset (e.g., print it)
        for (auto x : subset) {
            cout << x << " ";
        }
        cout << endl;
    } else {
        // Exclude k from the subset
        search(k + 1);

        // Include k in the subset
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
    }
}

int main() {
    search(0); // Start the search from 0
    return 0;
}