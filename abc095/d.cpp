#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	ll C;
	cin >> N >> C;
	vector<ll> x(N), v(N);
	for(int i=0;i<N;i++) {
		cin >> x[i] >> v[i];
	}

	vector<ll> right_score(N), left_score(N);
	ll left = 0, right = 0;
	ll now = 0;
	ll left_ans = 0, right_ans = 0;

	// 左回り
	vector<ll> left_max(N,0);
	for(int i=0;i<N;i++) {
		left += (v[i] - (x[i] - now));
		left_score[i] = left;
		if(i > 0) left_max[i] = max(left_max[i-1], left_score[i]);
		else left_max[i] = left_score[i];
		now = x[i];
		left_ans = max(left_ans, left_score[i]);
	}

	// 右回り
	now = C;
	vector<ll> right_max(N,0);
	for(int i=N-1;i>=0;i--) {
		right += (v[i] - (now - x[i]));
		right_score[i] = right;
		if(i < N-1) right_max[i] = max(right_max[i+1], right_score[i]);
		else right_max[i] = right_score[i];
		now = x[i];
		right_ans = max(right_ans, right_score[i]);
	}

	// 左行ってから右
	ll left_back_ans = 0;
	vector<ll> left_back(N), right_back(N);
	for(int i=0;i<N-1;i++) {
		left_back[i] = (left_score[i] - x[i]);
		// [i+1, N-1]までのrightの最大値
		left_back[i] += right_max[i+1];
		left_back_ans = max(left_back_ans, left_back[i]);
	}
	
	// 右行ってから左
	ll right_back_ans = 0;
	for(int i=N-1;i>=1;i--) {
		right_back[i] = (right_score[i] - (C - x[i]));
		// [0,i-1]までのleftの最大値
		right_back[i] += left_max[i-1];
		right_back_ans = max(right_back_ans, right_back[i]);
	}

	cout << max({left_ans, right_ans, left_back_ans, right_back_ans}) << endl;
}
