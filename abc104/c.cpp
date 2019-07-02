#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 12
using namespace std;

int main() {
    ll D, G;
    cin >> D >> G;
    vector<ll> p(D), c(D);
    for (ll i = 0; i < D; i++) {
        cin >> p[i] >> c[i];
    }

    ll ans = INT_MAX;
    for (ll i=0;i<(2<<D);i++) {
        ll num = 0;
        ll score = 0;
        //max_indexというのはコンプリートしていない最大の値
        ll max_index = 0;
        for (ll j=0;j<D;j++) {
            if (i & (1<<j)) {
                num += p[j];
                score += p[j] * (j + 1) * 100 + c[j];
            } else {
                max_index = max(max_index, j);
            }
        }
        for (ll n = 0; n < p[max_index]; n++) {
            if (score >= G) {
                ans = min(ans, num);
                break;
            }
            score += 100 * (max_index+1);
            num++;
        }
    }
    cout << ans << endl;
}
