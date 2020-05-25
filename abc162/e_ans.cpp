#include<bits/stdc++.h>
using namespace std;

constexpr int64_t MOD = (int64_t)1e9 + 7;
int64_t N;
vector<int64_t> memo;

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

int64_t num_of_gcd_equal_1(int64_t k) {
    if (memo[k] != -1) {
        return memo[k];
    }

    int64_t result = MODpow(k, N);

    for (int64_t i = 2; i <= k; i++) {
        (result += MOD - num_of_gcd_equal_1(k / i)) %= MOD;
    }

    return memo[k] = result;
}

int main() {
    int64_t K;
    cin >> N >> K;

    memo.resize(K + 1, -1);

    int64_t ans = 0;
    for (int64_t k = 1; k <= K; k++) {
        (ans += k * num_of_gcd_equal_1(K / k)) %= MOD;
    }

    cout << ans << endl;
}
