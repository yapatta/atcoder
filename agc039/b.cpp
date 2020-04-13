#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()
const int INF = INT_MAX;

signed main(){
	int N;
	cin >> N;
	vector<vector<int>> edge(N);
	for(int i=0;i<N;i++) {
		string s;
		cin >> s;
		for(int j=i+1;j<N;j++) {
			if(s[j] == '1') {
				edge[i].push_back(j);
				edge[j].push_back(i);
			}
		}
	}
	int ans = -1;
	for(int st=0;st<N;st++) {
		bool flag = true;
		queue<pii> q;
		vector<int> dist(N, INF);
		q.push({st,1});
		while(!q.empty()) {
			int now = q.front().first;
			int v = q.front().second;
			q.pop();
			if(dist[now] != INF) {
				if((v + dist[now]) % 2 != 0) {
					flag = false;
					break;
				}
				continue;
			}
			dist[now] = v;
			for(int i=0;i<edge[now].size();i++) {
				int next = edge[now][i];
				q.push({next, v + 1});
			}
		}
		if(!flag) break;
		int tmp_ans = -1;
		for(int j=0;j<N;j++) {
			tmp_ans = max(tmp_ans, dist[j]);
		}
		ans = max(ans, tmp_ans);
	}
	cout << ans << endl;
}
