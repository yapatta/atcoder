#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;

    vector<vector<ll>> num(10, vector<ll>(10, 0));
    for (ll i = 1; i <= N; i++) {
        string str_i = to_string(i);
        num[str_i.front() - '0'][str_i.back() - '0']++;
    }

    ll ans = 0;
    for (ll i = 0; i < 10; i++) {
        for (ll j = 0; j < 10; j++) {
            ans += num[i][j] * num[j][i];
        }
    }
    cout << ans << endl;
}
