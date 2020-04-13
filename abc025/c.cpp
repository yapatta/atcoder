#include <bits/stdc++.h>
using namespace std;
using ll = long long;

char board[3][3];
int b[2][3], c[3][2];

int solve(int num) {
	if(num == 9) {
		int score = 0;
		for(int i=0;i<2;i++) {
			for(int j=0;j<3;j++) {
				if(board[i][j] == board[i+1][j])
					score += b[i][j];
			}
		}
		for(int i=0;i<3;i++) {
			for(int j=0;j<2;j++) {
				if(board[i][j] == board[i][j+1])
					score += c[i][j];
			}
		}
		return score;
	}
	// scoreはnumが偶数のとき初期値が最小, 奇数のとき初期値が最大
	// 偶数のときはscoreを最大に, 奇数のときはscoreを最小にしたい
	int score = ((num%2 == 0) ? INT_MIN : INT_MAX);
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			if(board[i][j] != '.') {
				continue;
			}
			board[i][j] = (num%2 == 0 ? 'o' : 'x');
			if(num % 2 == 0) {
				score = max(score, solve(num+1));
			}else {
				score = min(score, solve(num+1));
			}
			board[i][j] = '.';
		}
	}
	return score;
}

int main() {
	int sum = 0;
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			cin >> b[i][j];
			sum += b[i][j];
		}
	}
	for(int i=0;i<3;i++) {
		for(int j=0;j<2;j++) {
			cin >> c[i][j];
			sum += c[i][j];
		}
	}

	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			board[i][j] = '.';

	int chokudai = solve(0);
	cout << chokudai << endl;
	cout << sum - chokudai << endl;
}
