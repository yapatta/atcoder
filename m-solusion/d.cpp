#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
const ll INF=1e10+1;
using namespace std;
#define NOT_EXIST -1

int dy[]={1,-1,0,0,1,1,-1,-1,0};
int dx[]={0,0,1,-1,1,-1,1,-1,0};

int N, nodeindex;
vector<int> c;
vector<pi> ab;
vector<int> ans;
vector<vector<int> > node;
vector<bool> done;

void bfs(int st) {
		nodeindex = 0;
		done = vector<bool>(N,false);
		done[st] = true;
		queue<int> q;
		q.push(st);
		while(!q.empty()){
				int now = q.front();
				q.pop();
				ans[now] = c[nodeindex++];
				for(int i=0;i<node[now].size();i++){
						int nextnode = node[now][i];
						if(done[nextnode] == false){
								done[nextnode] = true;
								q.push(nextnode);
						}
				}
		}
}

signed
main(){
	cin >> N;
	//初期化
	c = vector<int>(N);
	ab = vector<pi>(N-1);
	ans = vector<int>(N);
	node = vector<vector<int> >(N);

	rep(i,N-1){
			int a,b;
			cin >> a >> b;
			a--,b--;
			ab[i] = {a,b};
			node[a].push_back(b);
			node[b].push_back(a);
	}

	rep(i,N){
			cin >> c[i];
	}
	sort(Rall(c));

	nodeindex = 0;
	bfs(0);

	int sum = 0;
	for(int i=0;i<N-1;i++){
			sum += min(ans[ab[i].first], ans[ab[i].second]);
	}
	cout << sum << endl;

	for(int i=0;i<N;i++){
			if(i!=0) cout << " ";
			cout << ans[i];
	}
	cout << endl;
}

