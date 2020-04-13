#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N, Q;
	string S;
	cin >> N >> S >> Q;
	vector<set<int>> al(26);

	// 前処理
	for(int i=0;i<N;i++) {
		char c = S[i];
		al[c-'a'].insert(i);
	}

	for(int q=0;q<Q;q++) {
		int tmp;
		cin >> tmp;
		if(tmp == 1) {
			int i;
			char c;
			cin >> i >> c;
			i--;
			al[S[i]-'a'].erase(i);
			// S[i]をcに変える(忘れずに)
			S[i] = c;
			al[c-'a'].insert(i);
		} else {
			int l, r;
			cin >> l >> r;
			l--, r--;
			int cnt = 0;
			for(int i=0;i<26;i++) {
				// l番目以上, r番目以下の数に'a'+iが存在するかどうか確かめる
				auto lb = al[i].lower_bound(l);
				auto ub = al[i].upper_bound(r);
				if(ub != lb) {
					cnt++;
				}

				// ちなみに *lbがr以下なら, l以上r以下に'a'+iが存在するとも言える
				/*
				if(*lb <= r) cnt++;
				*/
			}
			cout << cnt << endl;
		}
	}
}
