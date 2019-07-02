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
using namespace std;

int main(){
  ll N,A,B;
  cin >> N >> A >> B;
  vector<ll> d(B+2);
  d[0] = 0;
  for(ll i=1;i<=B;i++){
    cin >> d[i];
  }
  d[B+1] = N+1;
  sort(All(d));
  //cnt: プログラミングの連続練習日数
  //ans: プログラミングの合計練習日数
  ll ans = 0;
  for(ll i=0;i<B+1;i++){
    ll tmp = d[i+1]-d[i]-1;
    ans += (tmp-tmp/A);
  }
  cout << ans << endl;
}
