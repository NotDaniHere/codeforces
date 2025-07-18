#include <bits/stdc++.h>
using namespace std;

int main() {
    int _; cin >> _;
    while (_--) {
        int a; cin >> a; vector<int> A(a);
        for(int i = 0; i < a; i++) cin >> A[i];
        int zero_count = 0, two_count = 0, three_count = 0, one_count = 0, five_count = 0;
        int counter = 0;
        for(auto k : A) {
            if(k == 0) zero_count++;
            else if(k==2) two_count++;
            else if(k==3) three_count++;
            else if(k==1) one_count++;
            else if(k==5) five_count++;
            counter++;
            if(zero_count >= 3 && two_count >= 2 && three_count >= 1 && one_count >= 1 && five_count >= 1) break;
        }
        if(zero_count >= 3 && two_count >= 2 && three_count >= 1 && one_count >= 1 && five_count >= 1) {
            cout << a-(a-counter) << endl;
        } else {
            cout << 0 << endl;
        }

    }
    return 0;
}
