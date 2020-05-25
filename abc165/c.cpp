#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()
const int MIN = INT_MIN;
const int NONE = 1e9+7;

struct Edge {
	Edge(int b, int c, int d): b(b), c(c), d(d) {}
	int b, c, d;
};

vector<vector<Edge>> AB(10);
int N, M, Q;
int ans = 0;

void dfs(int now, vector<int> &A, int score) {
	if(now == N) {
		ans = max(ans, score);
		return;
	}
	for(int j=0;j<AB[now].size();j++) {
		int b = AB[now][j].b;
		int c = AB[now][j].c;
		int d = AB[now][j].d;
		if(A[now] == NONE) {
			// 取らない
			dfs(now + 1, A, score);
			// 取る
			// 現在の値を決める
			int nowv_left = 1;
			int nowv_right = INT_MAX;
			for(int i=0;i<b;i++) {
				nowv_left = max(nowv_left, A[i]);
			}
			for(int i=b+1;i<N;i++) {
				nowv_right = min(nowv_right, A[i]);
			}
			if (nowv_left == NONE) nowv_left = 1;
			if(nowv_right == NONE) nowv_right = N;
			for(int nowv=nowv_left;nowv<=nowv_right;nowv++) {
				A[now] = nowv;
				A[b] = nowv + c;
				dfs(now + 1, A, score + d);
				A[now] = nowv;
				A[b] = NONE;
			}

		} else {
			if(A[b] == NONE or A[b] == A[now] + c) {
				// 取らない
				dfs(now + 1, A, score);
				// 取る
				A[b] = A[now] + c;
				dfs(now + 1, A, score + d);
				A[b] = NONE;
			} else {
				dfs(now + 1, A, score);
			}
		}
	}
}

int main(){
	cin >> N >> M >> Q;
	for(int i=0;i<Q;i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		a--, b--;
		AB[a].emplace_back(b, c, d);
	}
	vector<int> A(N, NONE);
	A[0] = 1;
	dfs(0, A, 0);
	cout << ans << endl;
}
