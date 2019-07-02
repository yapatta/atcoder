#include"bits/stdc++.h"
using namespace std;
using ll = int64_t;

int main() {
    ll Q;
    cin >> Q;
    
    priority_queue<ll> left_pq;
    priority_queue<ll, vector<ll>, greater<>> right_pq;
    left_pq.push(LLONG_MIN);
    right_pq.push(LLONG_MAX);

    ll sum_b = 0;
    ll min_v = 0;

    for (ll i = 0; i < Q; i++) {
        ll op;
        cin >> op;
        if (op == 1) {
            ll a, b;
            cin >> a >> b;
            sum_b += b;

            if (left_pq.size() == right_pq.size()) {
                if (a < left_pq.top()) {
                    min_v += left_pq.top() - a;
                }
                if (a > right_pq.top()) {
                    min_v += a - right_pq.top();
                }
            } else {
                min_v += abs(left_pq.top() - a);
            }

            if (a >= right_pq.top()) {
                right_pq.push(a);
            } else {
                left_pq.push(a);
            }

            if (right_pq.size() > left_pq.size()) {
                left_pq.push(right_pq.top());
                right_pq.pop();
            } else if (left_pq.size() > right_pq.size() + 1) {
                right_pq.push(left_pq.top());
                left_pq.pop();
            }
        } else {
            cout << left_pq.top() << " " << min_v + sum_b << endl;
        }
    }
}
