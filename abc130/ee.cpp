#include"bits/stdc++.h"
using namespace std;
using ll = int64_t;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> S(N), T(M);
    for (ll i = 0; i < N; i++) {
        cin >> S[i];
    }
    for (ll i = 0; i < M; i++) {
        cin >> T[i];
    }

    constexpr ll MOD = 1e9 + 7;
    vector<vector<ll>> dp(N + 1, vector<ll>(M + 1, 0));

    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < M; j++) {
            if (S[i] == T[j]) {
                (dp[i + 1][j + 1] += dp[i][j] + 1) %= MOD;
            }
        }

        //累積和を計算
        for (ll j = 0; j < M; j++) {
            (dp[i + 1][j + 1] += dp[i + 1][j]) %= MOD;
        }

        //前の結果に足す
        for (ll j = 0; j <= M; j++) {
            (dp[i + 1][j] += dp[i][j]) %= MOD;
        }
    }

    cout << dp[N][M] + 1 << endl;
}

