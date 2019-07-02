#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int main() {
  ll N,M,X,Y;
  cin >> N >> M >> X >> Y;
  vector<pair<ll,ll> > ab;
  rep(i,N){
    ll a;
    cin >> a;
    ab.push_back(make_pair(a,0));
  }
  rep(i,M){
    ll b;
    cin >> b;
    ab.push_back(make_pair(b,1));
  }
  sort(All(ab));

  ll x=0;
  while(true){
    if(ab[x].second==0){
      break;
    }
    x++;
  }
  ll num=ab[x].first+X, k=ab[x].second,count=0;
  for(ll i=x;i<ab.size();i++){
    if(k==0){
      if(ab[i].second==1&&num<=ab[i].first){
        num=ab[i].first+Y;
        k=1;
        count++;
      }
    }else{
      if(ab[i].second==0&&num<=ab[i].first){
        num=ab[i].first+X;
        k=0;
      }
    }
  }
  cout << count << endl;
}
