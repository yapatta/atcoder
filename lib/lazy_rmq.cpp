#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = INT_MAX;

// 遅延伝搬セグメント木
// AOJ RMQ and RUQ url(http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_F)
// 上のURL参照

struct LazySegmentTree {
	private:
		int n;
		vector<int> node, lazy;
		vector<bool> lazyFlag;
	public:
		LazySegmentTree(vector<int> v) {
			int sz = (int)v.size();
			n = 1;
			while(n < sz) n *= 2;
			node.resize(2*n-1);
			lazy.resize(2*n-1, INF);
			lazyFlag.resize(2*n-1, false);

			for(int i=0;i<sz;i++) node[i+n-1] = v[i];
			for(int i=n-2;i>=0;i--) node[i] = min(node[2*i+1], node[2*i+2]);
		}

		void eval(int k, int l, int r) {
			if(lazyFlag[k]) {
				node[k] = lazy[k];
				// 最下層じゃないとき
				if(r - l > 1) {
					lazy[2*k+1] = lazy[2*k+2] = lazy[k];
					lazyFlag[2*k+1] = lazyFlag[2*k+2] = true;
				}
				lazyFlag[k] = false;
			}
		}

		void update(int a, int b, int x, int k = 0, int l = 0, int r = -1) {
			if(r < 0) r = n;
			eval(k, l, r);
			if(b <= l || r <= a) return;
			if(a <= l && r <= b) {
				lazy[k] = x;
				lazyFlag[k] = true;
				eval(k, l, r);
			} else {
				update(a, b, x, 2*k+1, l, (l+r) >> 1);
				update(a, b, x, 2*k+2, (l+r) >> 1, r);
				node[k] = min(node[2*k+1], node[2*k+2]);
			}
		}

		int find(int a, int b, int k = 0, int l = 0, int r = -1) {
			if(r < 0) r = n;
			eval(k, l, r);
			if(b <= l || r <= a) return INF;
			if(a <= l && r <= b) return node[k];
			int vl = find(a, b, 2*k+1, l, (l+r)>>1);
			int vr = find(a, b, 2*k+2, (l+r)>>1, r);
			return min(vl, vr);
		}
};

int main() {
	int n, q;
	cin >> n >> q;
	LazySegmentTree st(vector<int>(n, INF));
	for(int i=0;i<q;i++) {
		int query;
		cin >> query;
		if(query == 0) {
			int s, t, x;
			cin >> s >> t >> x;
			st.update(s, t+1, x);
		} else {
			int s, t;
			cin >> s >> t;
			cout << st.find(s, t+1) << endl;
		}
	}
	return 0;
}
