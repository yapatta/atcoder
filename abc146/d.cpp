#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9+7;

int n;
vector<vector<int> > node;
vector<bool> done;
map<pair<int,int>,int> color;

void bfs(int now, int allSum, int before) {
	if(node[now].size() <= 1) {
		return;
	}
	int c = 0;
	// if(before != -1) cout << "before color: " << color[before][now] << endl;
	for(int i=0;i<node[now].size();i++) {
		int to = node[now][i];
		if(before != -1 && color.count(make_pair(before,now)) && c ==color[make_pair(before,now)]) {
			c++;
		}

		if(color.count(make_pair(now,to)) == 0) {
			color[make_pair(to,now)] = c;
			color[make_pair(now,to)] = c;
			c++;
			bfs(to, allSum, now);
		}
	}
}

int main(){
	cin >> n;
	node = vector<vector<int> >(n);
	done = vector<bool>(n,false);
	vector<int> x(n-1), y(n-1);
	for(int i=0;i<n-1;i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		x[i] = a, y[i] = b;
		node[a].push_back(b);
		node[b].push_back(a);
	}
	int fund = 0;
	for(int i=1;i<n;i++) {
		if(node[fund].size() < node[i].size()) {
			fund = i;
		}
	}
	cout << (int)node[fund].size() << endl;
	bfs(fund, (int)node[fund].size(),-1);
	for(int i=0;i<n-1;i++) {
		cout << color[make_pair(x[i],y[i])]+1 << endl;
	}
}
