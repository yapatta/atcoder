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

int H,W;
ll sum = 0;
vector<vector<ll> > a;
//dp[i][j]: (i,j)から行ける経路の個数
vector<vector<ll> > dp;

ll dfs(int y,int x){
	if(dp[y][x]!=-1){
		return dp[y][x];
	}

	ll ans = 1;

	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(0<=ny && ny<H && 0<=nx && nx<W){
			if(a[y][x] < a[ny][nx]){
				ans += dfs(ny,nx);
				ans %= MOD;
			}
		}
	}
	return dp[y][x] = ans;
}

int main(void){
	scanf("%d%d", &H,&W);

	a = vector<vector<ll> >(H,vector<ll>(W));
	dp = vector<vector<ll> >(H,vector<ll>(W,-1));

	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			scanf("%lld", &a[i][j]);
		}
	}

	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			dfs(i,j);
		}
	}

	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			sum += dp[i][j];
			sum %= MOD;
			//cout << i << " " << j << " = " << sum << endl;
		}
	}
	printf("%lld\n", sum);
}