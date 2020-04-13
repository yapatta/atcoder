#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9;

int dy[] = {0, 1};
int dx[] = {1, 0};

int main(){
	int H, W;
	cin >> H >> W;
	vector<string> S(H);
	vector<vector<int>> dist(H, vector<int>(W, INF));
	for(int i=0;i<H;i++) {
		cin >> S[i];
	}
	dist[0][0] = 0;
	queue<pair<pair<int,int>, pair<int,int>>> q;
	q.push({{-1,-1},{0,0}});
	while(!q.empty()) {
		auto tmp = q.front(); q.pop();
		int beforey = tmp.first.first;
		int beforex = tmp.first.second;
		int nowy = tmp.second.first;
		int nowx = tmp.second.second;
		bool flag = false;
		if(beforey == -1 and beforex == -1) {
			flag = true;
			if(S[nowy][nowx] == '#') dist[nowy][nowx] = 1;
		} else {
			if(S[beforey][beforex] == '.') {
				if(S[nowy][nowx] == '#') {
					if(dist[nowy][nowx] > dist[beforey][beforex] + 1) {
						dist[nowy][nowx] = dist[beforey][beforex] + 1;
						flag = true;
					}
				} else {
					if(dist[nowy][nowx] > dist[beforey][beforex]) {
						dist[nowy][nowx] = dist[beforey][beforex];
						flag = true;
					}
				}
			} else {
				if(dist[nowy][nowx] > dist[beforey][beforex]) {
					dist[nowy][nowx] = dist[beforey][beforex];
					flag = true;
				}
			}
		}
		if(flag) {
			for(int i=0;i<2;i++) {
				int nexty = nowy + dy[i];
				int nextx = nowx + dx[i];
				if(0 <= nexty and nexty < H and 0 <= nextx and nextx < W) {
					q.push({{nowy, nowx},{nexty, nextx}});
				}
			}
		}
	}
	cout << dist[H-1][W-1] << endl;
}
