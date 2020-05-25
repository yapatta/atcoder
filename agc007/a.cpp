#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};

signed main(void) {
	int H, W;
	cin >> H >> W;
	vector<string> A(H);
	for(auto &a : A) cin >> a;
	if(A[0][0] == '.') {
		cout << "Impossible" << endl;
		return 0;
	}
	
	queue<pair<int,int>> q;
	q.push({0,0});
	int routes = 0;
	bool flag = true;
	while(!q.empty()) {
		int nowy = q.front().first;
		int nowx = q.front().second;
		q.pop();
		if(nowy == H-1 and nowx == W-1) {
			routes++;
			continue;
		}
		int cnt = 0;
		for(int i=0;i<4;i++) {
			int nexty = nowy + dy[i];
			int nextx = nowx + dx[i];
			if(0 <= nexty and nexty < H and 0 <= nextx and nextx < W and A[nexty][nextx] == '#') {
				if(i==0 or i==1)
					q.push({nexty, nextx});
				cnt++;
			}
		}
		if(cnt > 1) flag = false;
	}
	if(routes == 1 and flag) cout << "Possible" << endl;
	else cout << "Impossible" << endl;
}
