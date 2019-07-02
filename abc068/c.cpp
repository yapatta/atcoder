#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 100005
using namespace std;
const ll MOD=1e9+7;

int main(){
  ll N,M;
  cin >> N >> M;
  vector<pair<ll,ll> > a1,a2;
  rep(i,M){
    ll a,b,max,min;
    cin >> a >> b;
    if(a>b){
      max=a;
      min=b;
    }else{
      max=b;
      min=a;
    }
    if(min==1) a1.push_back(make_pair(min,max));
    else a2.push_back(make_pair(min,max));
  }
  sort(All(a1));
  sort(All(a2));

  for(ll i=0;i<a1.size();i++){
    for(ll j=0;j<a2.size();j++){
      if((a2[j].first==a1[i].second)&&(a2[j].second==N)){
        cout << "POSSIBLE" << endl;
        return 0;
      }
    }
  }
  cout << "IMPOSSIBLE" << endl;
}
