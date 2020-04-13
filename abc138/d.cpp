#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,q;
vector<ll> c,ans;
vector<vector<int> > node;

void dfs(int st, int cnt) {
	ans[st] = cnt;
	for(int i=0;i<node[st].size();i++) {
		dfs(node[st][i], cnt+c[node[st][i]]);
	}
}

int main(){
	cin >> n >> q;
	c = vector<ll>(n,0);
	node = vector<vector<int> >(n);
	for(int i=0;i<n-1;i++) {
		int a,b;
		cin >> a >> b;
		a--,b--;
		node[a].push_back(b);
	}
	ans = vector<ll>(n,0);
	for(int i=0;i<q;i++)
	{
		int p,x;
		cin >> p >> x;
		p--;
		c[p] += x;
		
	}
	dfs(0, c[0]);
	for(int i=0;i<n;i++)
	{
		if(i!=0) cout << " ";
		cout << ans[i];
	}
	cout << endl;
}
