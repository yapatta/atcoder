#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll X,Y,Z,K;
  cin >> X >> Y >> Z >> K;
  vector<pair<ll,ll> > n(X+Y+Z);

  for(ll i=0;i<X;i++){
    ll tmp;
    cin >> tmp;
    n[i] = mp(tmp,0);
  }
  for(ll i=X;i<X+Y;i++){
    ll tmp;
    cin >> tmp;
    n[i] = mp(tmp,1);
  }
  for(ll i=X+Y;i<X+Y+Z;i++){
    ll tmp;
    cin >> tmp;
    n[i] = mp(tmp,2);
  }
  sort(All(n));
  vector<ll> x,y,z;

  ll a=0,b=0,c=0,cnt=X+Y+Z-1,j,k;
  while(1){
    if(n[cnt].second==0){
      a++;
      x.pb(n[cnt].first);
    }else if(n[cnt].second==1){
      b++;
      y.pb(n[cnt].first);
    }else if(n[cnt].second==2){
      c++;
      z.pb(n[cnt].first);
    }
    if(a*b*c>=K){
      break;
    }
    cnt--;
  }

  vector<ll> ans;

  for(ll i=0;i<x.size();i++){
    for(ll j=0;j<y.size();j++){
      for(ll k=0;k<z.size();k++){
        ans.pb(x[i]+y[j]+z[k]);
      }
    }
  }
  sort(All(ans));

  ll key = ans.size()-1;
  c = 0;
  while(c<K){
    cout << ans[key-c] << endl;
    c++;
  }
}
