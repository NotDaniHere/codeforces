#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        unsigned long long n, x;
        cin >> n >> x;
        bool found = false;
        for (long long y = n; y >= 0; --y) {
            if (y == 0) {
                if (x == 0) {
                    continue;
                } else {
                    for (unsigned long long i = 0; i < n; i++) {
                        cout << x;
                        if (i < n-1) cout << " ";
                    }
                    cout << '\n';
                    found = true;
                    break;
                }
            } else {
                unsigned long long Tval = 0;
                if (y == 1) {
                    Tval = 0;
                } else if (y > 1) {
                    int k = 0;
                    while ((1ULL << k) <= (y-1)) {
                        k++;
                    }
                    Tval = (1ULL << k) - 1;
                }
                if ((Tval | x) != x) {
                    continue;
                }
                unsigned long long Rval = x & ~Tval;
                if (Rval == 0) {
                    for (unsigned long long i = 0; i < y; i++) {
                        cout << i;
                        if (i < y-1 || n > y) {
                            cout << " ";
                        }
                    }
                    for (unsigned long long i = 0; i < n - y; i++) {
                        cout << 0;
                        if (i < n - y - 1) {
                            cout << " ";
                        }
                    }
                    cout << '\n';
                    found = true;
                    break;
                } else if (Rval != y) {
                    if (n - y >= 1) {
                        for (unsigned long long i = 0; i < y; i++) {
                            cout << i << " ";
                        }
                        cout << Rval;
                        if (n - y - 1 > 0) {
                            cout << " ";
                            for (unsigned long long i = 0; i < n - y - 1; i++) {
                                cout << 0;
                                if (i < n - y - 2) {
                                    cout << " ";
                                }
                            }
                        }
                        cout << '\n';
                        found = true;
                        break;
                    } else {
                        continue;
                    }
                } else {
                    if ((y & (y-1)) == 0) {
                        continue;
                    } else {
                        if (n - y >= 2) {
                            unsigned long long bit = 1;
                            while ((bit & y) == 0) {
                                bit <<= 1;
                            }
                            unsigned long long a = y ^ bit;
                            unsigned long long b = bit;
                            for (unsigned long long i = 0; i < y; i++) {
                                cout << i << " ";
                            }
                            cout << a << " " << b;
                            if (n - y - 2 > 0) {
                                cout << " ";
                                for (unsigned long long i = 0; i < n - y - 2; i++) {
                                    cout << 0;
                                    if (i < n - y - 3) {
                                        cout << " ";
                                    }
                                }
                            }
                            cout << '\n';
                            found = true;
                            break;
                        } else {
                            continue;
                        }
                    }
                }
            }
        }
        if (!found) {
            for (unsigned long long i = 0; i < n; i++) {
                cout << 0;
                if (i < n-1) cout << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}