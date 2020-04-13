#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int R, C, K;
	cin >> R >> C >> K;
	vector<string> S(R);
	for(int i=0;i<R;i++) {
		cin >> S[i];
	}

	vector<vector<int>> up_num(R,vector<int>(C,0));
	vector<vector<int>> down_num(R,vector<int>(C,0));
	for(int i=0;i<R;i++) {
		for(int j=0;j<C;j++) {
			if(S[i][j] == 'x') {
				up_num[i][j] = 0;
				down_num[i][j] = 0;
			} else {
				up_num[i][j] = 1;
				down_num[i][j] = 1;
			}
		}
	}

	for(int j=0;j<C;j++) {
		for(int i=1;i<R;i++) {
			if(S[i][j] == 'o')
				up_num[i][j] += up_num[i-1][j];
		}
	}
	for(int j=0;j<C;j++) {
		for(int i=R-2;i>=0;i--) {
			if(S[i][j] == 'o')
				down_num[i][j] += down_num[i+1][j];
		}
	}

	int ans = 0;
	for(int x=K-1;x<=R-K;x++) {
		for(int y=K-1;y<=C-K;y++) {
			bool flag = true;
			for(int num=K;num>=1;num--) {
				if(!(
							up_num[x][y-(K-num)] >= num and 
							down_num[x][y-(K-num)] >= num and 
							up_num[x][y+(K-num)] >= num and 
							down_num[x][y+(K-num)] >= num
					)) {
					flag = false;
					break;
				}
			}
			if(flag) ans++;
		}
	}
	cout << ans << endl;
}
