#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const long long MOD = 1000000007;

long long mod_exp(long long base, long long exp, long long mod) {
    base %= mod;
    long long res = 1;
    while (exp > 0) {
        if (exp & 1) 
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

int main() {
    int a, k;
    cin >> a >> k;
    vector<int> nums(a);
    for (int i = 0; i < a; i++) {
        cin >> nums[i];
    }

    vector<long long> fact(a+1), inv_fact(a+1);
    fact[0] = 1;
    for (int i = 1; i <= a; i++) {
        fact[i] = fact[i-1] * i % MOD;
    }

    inv_fact[a] = mod_exp(fact[a], MOD-2, MOD);
    for (int i = a-1; i >= 0; i--) {
        inv_fact[i] = inv_fact[i+1] * (i+1) % MOD;
    }

    sort(nums.begin(), nums.end());

    long long total = 0;
    for (int i = k-1; i < a; i++) {
        long long comb = fact[i] * inv_fact[k-1] % MOD;
        comb = comb * inv_fact[i - k + 1] % MOD;
        total = (total + static_cast<long long>(nums[i]) * comb) % MOD;
    }

    total = (total % MOD + MOD) % MOD;
    cout << total << endl;

    return 0;
}