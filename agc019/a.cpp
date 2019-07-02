#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll n;
  //q,h,s,dのリットルごとの値段でソートしたい

  //最終的には, first: 値段, second: リットル にしたい
  //でもその前に、リットルごとの値段を比較してソートしたい
  vector<pair<ll,ll> > num;
  ll ha = 8;
  rep(i,4){
    ll a;
    cin >> a;
    num.push_back(mp(a*ha,ha) );
    ha /= 2;
  }
  cin >> n;

  sort(All(num));

  //整数で扱えるようにリットルをすべて4倍
  n *= 4;
  //first: 値段(値段は変える必要ない), second: 4倍のリットル
  for(ll i=3;i>=0;i--){
    //もとに戻す
    num[i].first = (num[i].first/num[i].second);
    num[i].second = 8/num[i].second;
  }

  ll ans=0;
  for(ll i=0;i<4;i++){
    ans += ( num[i].first*(n/num[i].second) );
    n %= num[i].second;
  }
  cout << ans << endl;
}
