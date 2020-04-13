#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[] = {-1,0,0,1};
int dy[] = {0,1,-1,0};
// 行けることをまず判定
// 行けるルート以外のマスは全部塗りつぶしていい
// 答えは, 現在の.の個数 - 最短経路
// bfsだなあ
int main() {
	int h, w;
	cin >> h >> w;
	int sum = 0;
	vector<vector<bool>> n(h,vector<bool>(w));
	for(int i=0;i<h;i++) {
		string s;
		cin >> s;
		for(int j=0;j<w;j++) {
			if(s[j]=='.') {
				sum++;
				n[i][j] = true;
			}else n[i][j] = false;
		}
	}
	vector<vector<bool> > done(h,vector<bool>(w,false));
	// bfsやる
	queue<pair<int,pair<int,int>>> q;
	q.push({1,{0,0}});
	done[0][0] = true;
	int length = -1;
	while(!q.empty()) {
		auto tmp = q.front();
		int now = tmp.first;
		//cout << tmp.second.first << " " << tmp.second.second << endl;
		q.pop();
		if(tmp.second.first == h-1 && tmp.second.second == w-1) {
			length = tmp.first;
			break;
		}
		for(int i=0;i<4;i++) {
			int ny = tmp.second.first + dy[i];
			int nx = tmp.second.second + dx[i];
			if(0<=ny && ny<h && 0<=nx && nx<w && done[ny][nx] == false && n[ny][nx]) {
				done[ny][nx] = true;
				q.push({now+1,{ny,nx}});
			}
		}
	}
	//cout << "sum :" << sum << endl;
	//cout << "length: " <<  length << endl;
	if(length == -1) {
		cout << -1 << endl;
	}else {
		cout << sum - length << endl;
	}
}
