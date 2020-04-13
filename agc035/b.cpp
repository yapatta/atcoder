#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll N,M;
vector<vector<ll> > node;
int main(){
	cin >> N >> M;
	node = vector<vector<ll> >(N);
	for(int i=0;i<M;i++)
	{
		ll a,b;
		cin >> a >> b;
		a--,b--;
		node[a].push_back(b);
		node[b].push_back(a);
	}
	if(M%2 == 1) cout << -1 << endl;

}
