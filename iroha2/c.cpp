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

int main() {
  ll N;
  cin >> N;
  vector<pll> h(N);
  rep(i,N){
    ll tmp;
    cin >> tmp;
    h[i] = mp(tmp,i);
  }
  sort(All(h));
  vector<ll> ans(N);
  ll cnt = 1;
  ans[h[0].second] = cnt;
  for(ll i=1;i<N;i++){
    if(h[i].first==h[i-1].first){

    }else{
      cnt++;
    }
    ans[h[i].second] = cnt;
  }
  rep(i,N){
    cout << ans[i] << endl;
  }
}
