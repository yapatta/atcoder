#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_N = 1e5+5;

int N, M;
int a[MAX_N];
vector<int> ans;
bool used[MAX_N];

void input() {
	cin >> N >> M;
	for(int i=0;i<M;i++) {
		cin >> a[i];
	}
}

void init() {
	for(int i=0;i<=N;i++) {
		used[i] = false;
	}
}

void solve() {
	for(int i=M-1;i>=0;i--) {
		if(!used[a[i]]) {
			ans.push_back(a[i]);
			used[a[i]] = true;
		}
	}
	for(int i=1;i<=N;i++) {
		if(!used[i]) {
			ans.push_back(i);
		}
	}

	for(int i=0;i<N;i++) {
		cout << ans[i] << endl;
	}
}

int main(){
	input();
	init();
	solve();
}
