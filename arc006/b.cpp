#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N, L;
	cin >> N >> L;
	vector<string> am(L);
	// 最初のgetLineでは空文字が入力される
	getline(cin, am[0]);
	for(int i=0;i<L;i++) {
		getline(cin, am[L-1-i]);
	}
	int start, goal;
	string tmp;
	getline(cin, tmp);

	for(int i=0;i<2*N-1;i++)
		if(tmp[i] == 'o')
			start = i;

	int now = start;
	for(int i=0;i<L;i++) {
		if(now + 1 < 2 * N - 1 and am[i][now+1] == '-') {
			now = now + 2;
		} else if(0 < now - 1 and am[i][now-1] == '-') {
			now = now - 2;
		} else {
			now = now;
		}
	}
	cout << now / 2 + 1 << endl;
}
