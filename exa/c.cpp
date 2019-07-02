#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
const ll MOD=1e9+7;
using namespace std;

vector<vector<ll> > al(26);

int main(){
  ll N,Q;
  string s;
  cin >> N >> Q >> s;
  rep(i,N){
    al[s[i]-'A'].push_back(i+1);
  }

  vector<ll> num(N+2);
  for(ll i=1;i<=N;i++) num[i]=1;
  num[0] = num[N+1] = 0;

  for(ll i=0;i<Q;i++){
    char t,d;
    cin >> t >> d;

    if(d == 'R'){
      for(ll j=al[t-'A'].size()-1;j>=0;j--){
        ll tmp = num[ al[t-'A'][j] ];
        num[ al[t-'A'][j] + 1 ] += tmp;
        num[ al[t-'A'][j] ] = 0;
        if(num[27]>0) {
          num[27] = 0;
        }
      }
    }else{
      for(ll j=0;j<al[t-'A'].size();j++){
        ll tmp = num[ al[t-'A'][j] ];
        num[ al[t-'A'][j] - 1 ] += tmp;
        num[ al[t-'A'][j]] = 0;
        if(num[0]>0) {
          num[0] = 0;
        }
      }
    }
  }

  ll cnt = 0;
  for(ll i=1;i<=N;i++){
    cnt += num[i];
  }
  cout << cnt << endl;
}
