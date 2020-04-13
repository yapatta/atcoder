#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_N = 2505;
const int MAX_M = 5005;
ll n,m,p;
int ans = -1;
vector<vector<pair<int,int> > > node;

void dfs(int start, int score, int cnt) {
	if(node[start].size()==1 and node[start][0].first == start) {
		return;
	}else if(node[start].size()==0 and start!=n-1) {
		return;
	}else if(start==n-1) {
		int retval = score - cnt*p;
		if(retval < 0) retval = 0;
		ans = max(ans, retval);
		return;
	}
	for(int i=0;i<node[start].size();i++) {
		dfs(node[start][i].first, score+node[start][i].second, cnt+1);
	}
}
int main(){
	cin >> n >> m >> p;
	node = vector<vector<pair<int,int> > >(n+1);
	for(int i=0;i<m;i++) {
		int a,b,c;
		cin >> a >> b >> c;
		a--,b--;
		node[a].push_back(make_pair(b,c));
	}
	dfs(0, 0, 0);
	cout << ans << endl;
}
