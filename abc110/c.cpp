#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  string s,t;
  cin >> s >> t;
  ll n = s.size();
  vector<vector<ll> > a(26),b(26);
  for(ll i=0;i<n;i++){
    a[s[i]-'a'].pb(i);
    b[t[i]-'a'].pb(i);
  }
  rep(i,26){
    sort(All(a[i]));
    sort(All(b[i]));
  }
  vector<string> x,y;
  rep(i,26){
    string o,p;
    rep(j,a[i].size()){
      o += to_string(a[i][j]);
    }
    if(a[i].size()>0) x.push_back(o);
    rep(j,b[i].size()){
      p += to_string(b[i][j]);
    }
    if(b[i].size()>0) y.push_back(p);
  }
  sort(All(x));
  sort(All(y));

  if(x.size()!=y.size()){
    cout << "No" << endl;
    return 0;
  }
  rep(i,x.size()){
    if(x[i]!=y[i]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
