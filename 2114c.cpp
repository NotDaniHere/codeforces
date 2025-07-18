#include <bits/stdc++.h>
using namespace std;
int main() {
    int _; cin >> _;
    while(_--) {
        int a; cin >> a;
        vector<int> A(a);
        for(int i = 0; i < a; i++) cin >> A[i];
        int current_element = A[0]; int deletes = 0;
        for(int i = 1; i < a; i++) {
            if(current_element + 1 >= A[i]) deletes++;
            else current_element=A[i];
        }
        if(deletes == a) cout << 1 << endl;
        else cout << a-deletes << endl;

    }

    return 0;
}