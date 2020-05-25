#include<bits/stdc++.h>
using namespace std;

bool next_candidate(vector<int64_t>& v, int64_t max) {
    for (int64_t i = v.size() - 1; i >= 0; i--) {
        if (v[i] < max) {
            v[i]++;
            for (int64_t j = i + 1; j < v.size(); j++) {
                v[j] = v[i];
            }
            return true;
        }
    }
    return false;
}

int main() {
    int64_t N, M, Q;
    cin >> N >> M >> Q;
    vector<int64_t> a(Q), b(Q), c(Q), d(Q);
    for (int64_t i = 0; i < Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        a[i]--;
        b[i]--;
    }

    vector<int64_t> A(N, 1);
    int64_t ans = 0;
    do {
        int64_t curr_score = 0;
        for (int64_t i = 0; i < Q; i++) {
            if (A[b[i]] - A[a[i]] == c[i]) {
                curr_score += d[i];
            }
        }
        ans = max(ans, curr_score);
    } while (next_candidate(A, M));

    cout << ans << endl;
}
