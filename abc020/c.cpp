#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dy[] = {1,-1,0,0};
int dx[] = {0,0,1,-1};

int H, W;
ll T;
vector<vector<bool>> p;
pair<int,int> start, goal;

bool C(ll x) {
	ll dist[H][W][H][W];
	for(int a=0;a<H;a++) {
		for(int b=0;b<W;b++) {
			for(int c=0;c<H;c++) {
				for(int d=0;d<W;d++) {
					dist[a][b][c][d] = 1e9+5;
				}
			}
		}
	}

	for(int a=0;a<H;a++) {
		for(int b=0;b<W;b++) {
			for(int i=0;i<4;i++) {
				int c = a + dy[i];
				int d = b + dx[i];
				if(0 <= c and c < H and 0 <= d and d < W) {
					if(p[c][d] == 1) {
						dist[a][b][c][d] = 1;
					} else {
						dist[a][b][c][d] = x;
					}
				}
			}
		}
	}

	for(int a=0;a<H;a++) {
		for(int b=0;b<W;b++) {
			for(int c=0;c<H;c++) {
				for(int d=0;d<W;d++) {
					for(int e=0;e<H;e++) {
						for(int f=0;f<W;f++) {
							dist[c][d][e][f] = min(dist[c][d][e][f], dist[c][d][a][b] + dist[a][b][e][f]);
						}
					}
				}
			}
		}
	}
	return ((dist[start.first][start.second][goal.first][goal.second] <= T) ? true : false);
}

int main(){
	cin >> H >> W >> T;
	p = vector<vector<bool>>(H,vector<bool>(W));
	for(int h=0;h<H;h++) {
		string s;
		cin >> s;
		for(int w=0;w<W;w++) {
			if(s[w] == '.') p[h][w]= 1;
			else if(s[w] == '#') p[h][w]= 0;
			else if(s[w] == 'S') {
				start = make_pair(h,w);
				p[h][w] = 1;
			}
			else if(s[w] == 'G') {
				goal = make_pair(h,w);
				p[h][w] = 1;
			}
		}
	}

	ll left = 1, right = T;
	while(right - left > 1) {
		ll mid = (left + right) >> 1;
		// C(x): x = midの場合T秒以内にゴールに行けるかどうか
		// cout << left << " " << right << endl;
		if(C(mid)) {
			left = mid;
		} else {
			right = mid;
		}
	}
	cout << left << endl;
}
