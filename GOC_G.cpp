#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100010;
typedef long long ll;

struct Event {
    ll end, start, g;
};

ll fenw[MAXN];

void update(int i, ll val, int n) {
    while (i < n) {
        if (val > fenw[i]) {
            fenw[i] = val;
        }
        i = (i | (i + 1));
    }
}

ll query(int i) {
    if (i < 0) return 0;
    ll res = 0;
    while (i >= 0) {
        if (fenw[i] > res) {
            res = fenw[i];
        }
        if (i == 0) break;
        i = (i & (i + 1)) - 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<Event> events;
    for (int i = 0; i < n; i++) {
        ll s, d, g;
        cin >> s >> d >> g;
        events.push_back({s + d, s, g});
    }
    sort(events.begin(), events.end(), [](const Event& a, const Event& b) {
        return a.end < b.end;
    });
    vector<ll> ends;
    for (int i = 0; i < n; i++) {
        ends.push_back(events[i].end);
    }

    memset(fenw, 0, sizeof(fenw));

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll s_i = events[i].start;
        ll g_i = events[i].g;

        auto it = upper_bound(ends.begin(), ends.begin() + i, s_i);
        int idx = it - ends.begin();

        ll best = 0;
        if (idx > 0) {
            best = query(idx - 1);
        }

        ll dp_i = g_i + best;
        ans = max(ans, dp_i);

        update(i, dp_i, n);
    }

    cout << ans << endl;
    return 0;
}