#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i, s, n) for (ll(i) = (s); (i) < (n); ++(i))
#define rep(i, n) reps(i, 0, n)
#define reptr(i, n) for (ll(i) = (n); (i) >= 0; --(i))
#define All(x) (x).begin(), (x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll, ll>
#define pi pair<int, int>
#define mp make_pair
#define pb push_back
const ll MOD = 1e9 + 7;
const ll INF = 1e10 + 1;
using namespace std;
#define NOT_EXIST -1

int dy[] = { 1, -1, 0, 0, 1, 1, -1, -1, 0 };
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1, 0 };

signed
main()
{
  int N, M;
  cin >> N >> M;
  vector<int> p(M);
  vector<vector<int> > s(M);
  rep(i, M) {
	  int k;
	  cin >> k;
	  rep(j,k){
		  int tmp;
		  cin >> tmp;
		  tmp--;
		  s[i].pb(tmp);
	  }
  }
  rep(i, M) { cin >> p[i]; }

  ll ans = 0;
  for(int i=0;i<(1<<N);i++){
  	bool flag = true;
  	for(int j=0;j<M;j++){
  		int num = 0;
  		for(int k=0;k<s[j].size();k++){
  			if( i&(1<<s[j][k] ) ){
  				num++;
  			}
  		}
  		if(num%2 != p[j]) flag = false;
  	}
  	if(flag) ans++;
  }
  cout << ans << endl;
}
