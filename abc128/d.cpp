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

int N,K;
ll dq[55];
ll ans = 0;

void dfs(int left, int right, ll sum, int cnt, bool l, bool r) {
  //k回操作を行ったら終了;
  if(cnt==K) {
    if(ans < sum){
      ans = sum;
    }
  }else if(cnt>K) return;


  if(right-left+1>0){
    if(l){
      dfs(left+1,right,sum + dq[left], cnt+1, true, true);
      dfs(left+1,right,sum, cnt+2, true, false);
    }
    if(r){
      dfs(left,right-1,sum + dq[right], cnt+1, true, true);
      dfs(left,right-1,sum, cnt+2, false, true);
    }
  }
}

signed
main()
{
  scanf("%d%d", &N, &K);
  for(int i=0;i<N;i++){
    scanf("%lld", &dq[i]);
  }
  dfs(0,N-1,0,0, true, true);
  cout << ans << endl;
}
