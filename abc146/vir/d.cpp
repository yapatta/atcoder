#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> node;
vector<int> a,b;
vector<bool> done;
map<pair<int,int>,int> color;

void dfs(int from, int forbidden) {
	int val = 0;
	for(int i=0;i<node[from].size();i++) {
		int to = node[from][i];
		if(color.count(make_pair(from,to))) {
			continue;
		}
		if(val == forbidden) {
			val++;
		}
		color[make_pair(from,to)] = val;
		color[make_pair(to,from)] = val;
		dfs(to,val);
		val++;
	}
}

int main() {
	int n;
	cin >> n;
	a = vector<int>(n);
	b = vector<int>(n);
	done = vector<bool>(n, false);
	node = vector<vector<int>>(n);
	for(int i=0;i<n-1;i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		a[i] = x, b[i] = y;
		node[x].push_back(y);
		node[y].push_back(x);
	}
	int num = 0;
	for(int i=1;i<n;i++) {
		if((int)node[num].size() < (int)node[i].size()) {
			num = i;
		}
	}
	
	dfs(num, -1);

	cout << (int)node[num].size() << endl;
	for(int i=0;i<n-1;i++) {
		cout << color[make_pair(a[i],b[i])] + 1 << endl;
	}
}
