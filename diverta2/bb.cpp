#include"bits/stdc++.h"
using namespace std;
using ll = uint64_t;

int main() {
    ll N;
    cin >> N;
    vector<ll> x(N), y(N);
    for (ll i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    map<pair<ll, ll>, ll> mp;
    for (ll i = 0; i < N; i++) {
        for (ll j = i + 1; j < N; j++) {
            mp[{x[i] - x[j], y[i] - y[j]}]++;
            mp[{x[j] - x[i], y[j] - y[i]}]++;
        }
    }

    ll ans = 0;
    for (auto p : mp) {
        ans = max(ans, p.second);

    }

    cout << N - ans << endl;
}

