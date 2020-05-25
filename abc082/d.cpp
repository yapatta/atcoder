#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 8020;

signed main(void) {
	string s;
	int x, y;
	cin >> s >> x >> y;
	
	vector<int> fn;
	int cnt = 0;
	for(int i=0;i<s.size();i++) {
		if(s[i] == 'T') {
			fn.push_back(cnt);
			cnt = 0;
		} else {
			cnt++;
			if(i == s.size() - 1)
				fn.push_back(cnt);
		}
	}
	vector<int> xa, ya;
	for(int i=0;i<fn.size();i++) {
		if(i % 2 == 0) {
			xa.push_back(fn[i]);
		} else {
			ya.push_back(fn[i]);
		}
	}

	vector<vector<bool>> dpx(xa.size()+1, vector<bool>(2*MAX, false));
	vector<vector<bool>> dpy(ya.size()+1, vector<bool>(2*MAX, false));

	dpx[0][MAX] = dpy[0][MAX] = true;

	for(int i=0;i<xa.size();i++) {
		for(int j=0;j<=2*MAX;j++) {
			if(j + xa[i] <= 2 * MAX) {
				dpx[i+1][j+xa[i]] = dpx[i+1][j+xa[i]] | dpx[i][j];
			}
			// 最初の移動ではx軸の正の向きにしか進めない
			if(j - xa[i] >= 0 and i > 0) {
				dpx[i+1][j-xa[i]] = dpx[i+1][j-xa[i]] | dpx[i][j];
			}
		}
	}
	for(int i=0;i<ya.size();i++) {
		for(int j=0;j<=2*MAX;j++) {
			if(j + ya[i] <= 2 * MAX) {
				dpy[i+1][j+ya[i]] = dpy[i+1][j+ya[i]] | dpy[i][j];
			}
			if(j - ya[i] >= 0) {
				dpy[i+1][j-ya[i]] = dpy[i+1][j-ya[i]] | dpy[i][j];
			}
		}
	}

	if(dpx[xa.size()][MAX+x] and dpy[ya.size()][MAX+y]) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}
