#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dy[] = {-1,-1,-1,0,0,0,1,1,1};
int dx[] = {-1,0,1,-1,0,1,-1,0,1};

int main() {
	int H, W;
	cin >> H >> W;
	vector<vector<bool>> S(H,vector<bool>(W));
	for(int i=0;i<H;i++) {
		string s;
		cin >> s;
		for(int j=0;j<W;j++)
			S[i][j] = ((s[j] == '#') ? true : false);
	}
	vector<vector<bool>> origin(H, vector<bool>(W, true));
	vector<vector<bool>> restore(H, vector<bool>(W, false));
	for(int i=0;i<H;i++) {
		for(int j=0;j<W;j++) {
			if(S[i][j] == false) {
				for(int k=0;k<9;k++) {
					int y = i + dy[k];
					int x = j + dx[k];
					if(0 <= y and y < H and 0 <= x and x < W) 
						origin[y][x] = false;
				}
			}
		}
	}
	for(int i=0;i<H;i++) {
		for(int j=0;j<W;j++) {
			if(origin[i][j] == true) {
				for(int k=0;k<9;k++) {
					int y = i + dy[k];
					int x = j + dx[k];
					if(0 <= y and y < H and 0 <= x and x < W) 
						restore[y][x] = true;
				}
			}
		}
	}
	bool flag = true;
	for(int i=0;i<H;i++) {
		for(int j=0;j<W;j++) {
			if(S[i][j] != restore[i][j]) {
				flag = false;
			}
		}
	}
	if(flag) {
		cout << "possible" << endl;
		for(int i=0;i<H;i++) {
			for(int j=0;j<W;j++)
				cout << ((origin[i][j]) ? "#" : ".");
			cout << endl;
		}
	} else {
		cout << "impossible" << endl;
	}
}
