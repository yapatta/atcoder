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
  ll N,K;
  cin >> N >> K;
  vector<pll> g;
  ll i = 2, sum = 0;
  while(1){
    ll cnt = 0;
    if(N%i==0){
      while(N%i==0){
        N /= i;
        cnt++;
      }
      g.pb(mp(i,cnt));
      sum += cnt;
      cnt = 0;
    }
    i++;
    if(N==1) break;
  }
  if(sum<K) {
    cout << -1 << endl;
    return 0;
  }
  ll num = 0, rest = 1;
  for(ll i=0;i<g.size();i++){
    for(ll j=0;j<g[i].second;j++){
      if(num<K-1){
        if(i!=0 || j!=0) cout << " ";
        cout << g[i].first;
        num++;
      }else{
        rest *= g[i].first;
      }
    }
  }
  if(num==K-1) cout << " " << rest;
  cout << endl;
}
