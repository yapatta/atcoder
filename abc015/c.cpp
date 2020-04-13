#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t[7][7];
int N, K;

bool dfs(int now, int val) {
	if(now > 0 and val == 0) return true;
	if(now == N) return false;
	// バグがあるか
	bool haveBugged = false;
	for(int i=0;i<K;i++) {
		int nval = val xor t[now][i];
		haveBugged = haveBugged | dfs(now+1, nval);
	}
	return haveBugged;
}

int main() {
	cin >> N >> K;
	for(int i=0;i<N;i++) {
		for(int j=0;j<K;j++) {
			cin >> t[i][j];
		}
	}
	if(dfs(0,0)) cout << "Found" << endl;
	else cout << "Nothing" << endl;
}
