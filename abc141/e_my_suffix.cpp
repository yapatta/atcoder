#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	string S;
	cin >> N >> S;
	vector<pair<string,int>> suffix(N);
	for(int i=0;i<N;i++) {
		suffix[i] = make_pair(S.substr(i), i);
	}
	sort(suffix.begin(), suffix.end());

	int ans = 0;
	for(int i=0;i<N;i++) {
		auto now = suffix[i];
		string nows = now.first;
		int nowi = suffix[i].second;
		if(i + 1 < N) suffix[i] = suffix[i+1];
		else suffix[i] = suffix[i-1];

		int left = 0, right = N;
		// 二分探索
		while(right - left > 1) {
			int mid = (left + right) / 2;
			if(nows < suffix[mid].first) right = mid;
			else left = mid;
		}
		int cnt = 0;
		for(int j=0;j<min(nows.size(), suffix[left].first.size());j++)
			if(nows[j] == suffix[left].first[j]) cnt++;
			else break;

		suffix[i] = now;
		ans = max(ans, min(cnt, abs(nowi - suffix[left].second)));
	}
	cout << ans << endl;
}
