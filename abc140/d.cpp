#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N, K;
	string S;
	cin >> N >> K >> S;

	// 幸福じゃない人たちを見る
	// 右向きの人達, 左向きの人たち
	int left = 0, right = 0;
	if(S[0] == 'L') left++;
	if(S[N-1] == 'R') right++;
	for(int i=0;i<N-1;i++) {
		if(S[i] == 'R' and S[i+1] == 'L') {
			right++;
			left++;
		}
	}
	if(left == right) {
		cout << N - ((left + right) - min(2 * K, left+right-1)) << endl;
	} else {
		int minval = min(left, right);
		cout << N - ((left+right) - 2 * min(minval, K)) << endl;
	}
}
