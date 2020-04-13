#include<bits/stdc++.h>
using namespace std;
constexpr int64_t MOD = 1e9 + 7;

int64_t MODpow(int64_t n, int64_t m) {
    int64_t result = 1;
    while (m) {
        if (m % 2 == 1) {
            result *= n;
            result %= MOD;
        }

        m /= 2;
        n *= n;
        n %= MOD;
    }
    return result;
}

int main() {
    int64_t n, a, b;
    cin >> n >> a >> b;

    int64_t ans = MODpow(2, n);
    (ans += MOD - 1) %= MOD;

    int64_t nCa = 1, nCb = 1;
    for (int64_t i = 1; i <= a; i++) {
        (nCa *= (n + 1 - i)) %= MOD;
        (nCa *= MODpow(i, MOD - 2)) %= MOD;
    }
    for (int64_t i = 1; i <= b; i++) {
        (nCb *= (n + 1 - i)) %= MOD;
        (nCb *= MODpow(i, MOD - 2)) %= MOD;
    }

    (ans += MOD - nCa) %= MOD;
    (ans += MOD - nCb) %= MOD;
    cout << ans << endl;
}
