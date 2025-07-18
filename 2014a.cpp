#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _; cin >> _;
    while(_--) {
        
        int a,b; cin >> a >> b;
        int coin_counter = 0, ppl_counter = 0;
        for(int i = 0; i < a; i++) {
            int c; cin >> c;
            if(c >= b) {
                coin_counter+=c;
            } else if(c == 0 && coin_counter) {
                coin_counter--;
                ppl_counter++;
            }
        }
        cout << ppl_counter << endl;
    }

    return 0;
}