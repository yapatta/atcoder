#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N), B(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }


    vector<bool> possibility(N, true);
    for (ll i = 0; i < N; i++) {
        if (!possibility[i]) {
            continue;
        }

        ll num = 0;
        for (ll j = 0; j < N; j++) {
            if (j == i) {
                continue;
            }

            ll beat_i = (A[i] + B[j] - 1) / B[j];
            ll beat_j = (A[j] + B[i] - 1) / B[i];
            if (beat_i <= beat_j) {
                break;
            } else {
                possibility[i] = false;
                num++;
            }
        }

        if (num == N - 1) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}
