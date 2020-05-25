#include <bits/stdc++.h>
using namespace std;

bool next_A(vector<int> &vec, int M) {
	for(int i=vec.size()-1;i>=0;i--) {
		if(vec[i] < M) {
			vec[i]++;
			for (int j=i+1;j<vec.size();j++) {
				vec[j] = vec[i];
			}
			return true;
		}
	}
	return false;
}

int main() {
	int N, M, Q;
	cin >> N >> M >> Q;
	
	vector<int> a(Q), b(Q), c(Q), d(Q);
	for(int i=0;i<Q;i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
		a[i]--;
		b[i]--;
	}

	int ans = 0;
	vector<int> A(N, 1);

	do {
		int current_ans = 0;
		for (int i=0;i<Q;i++) {
			if ( (A[b[i]] - A[a[i]]) == c[i] ) {
				current_ans += d[i];
			}
		}
		ans = max(ans, current_ans);
	} while (next_A(A, M));

	cout << ans << endl;
}
