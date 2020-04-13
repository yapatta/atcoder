#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXH = 100;
const int MAXW = 100;

int main() {
	int A, B;
	cin >> A >> B;
	// 白が0
	vector<vector<bool>> wb(MAXH, vector<bool>(MAXW, 0));
	// 白に黒をB-1個取り込む
	int bcnt = 0;
	for(int h=0;h<(MAXH/2);h++) {
		for(int w=0;w<MAXW;w++) {
			if(bcnt == B - 1) break;
			if(h % 2 == 0 and w % 2 == 0) {
				wb[h][w] = 1;
				bcnt++;
			}
		}
		if(bcnt == B - 1) break;
	}
	// 黒に白をA-1個取り込む
	for(int h=(MAXH/2);h<MAXH;h++)
		for(int w=0;w<MAXW;w++)
			wb[h][w] = 1;
	int wcnt = 0;
	for(int h=(MAXH/2);h<MAXH;h++) {
		for(int w=0;w<MAXW;w++) {
			if(wcnt == A - 1) break;
			if(h % 2 == 1 and w % 2 == 0) {
				wb[h][w] = 0;
				wcnt++;
			}
		}
		if(wcnt == A - 1) break;
	}

	cout << MAXH << " " << MAXW << endl;
	for(int h=0;h<MAXH;h++) {
		for(int w=0;w<MAXW;w++) {
			cout << ((wb[h][w]) ? '#' : '.' );
		}
		cout << endl;
	}
}
