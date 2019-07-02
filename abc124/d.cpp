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
  ll N,K;
  string s;
  cin >> N >> K;
  cin >> s;
  vector<pair<ll,ll> > num;
  for(ll i=0;i<s.size();i++){
    ll cnt = 0;
    if(s[i]=='0'){
      while(1){
        if(s[i]!='0'){
          num.pb(mp(0,cnt));
          i--;
          break;
        }
        i++;
        cnt++;
      }
    }else{
      while(1){
        if(s[i]!='1'){
          num.pb(mp(1,cnt));
          i--;
          break;
        }
        i++;
        cnt++;
      }
    }
  }
  ll zero = 0;
  rep(i,num.size()){
    if(num[i].first==0) zero++;
  }
  //0の個数がK以下だと、自動的にN
  if(zero<=K){
    cout << N << endl;
    return 0;
  }
  ll l=0,r=1;
  ll ans=0,before=0;
  //最初が1のとき
  if(num[0].first==1){
    for(ll i=0;i<2*K+1;i++){
      ans += num[i].second;
    }
    r = 2*K+1;
    before = ans;
    while(r<num.size()){
      ll tmp = before;
      tmp -= num[l].second;
      tmp -= num[l+1].second;
      l += 2;
      tmp += num[r].second;
      tmp += num[r+1].second;
      r += 2;
      before = tmp;
      if(ans<tmp) ans = tmp;
    }
  }else{
    for(ll i=0;i<2*K;i++){
      ans += num[i].second;
    }
    r = 2*K;
    before = ans;
    while(r<num.size()){
      ll tmp = before;
      tmp -= num[l].second;
      tmp -= num[l+1].second;
      l += 2;
      tmp += num[r].second;
      tmp += num[r+1].second;
      r += 2;
      before = tmp;
      if(ans<tmp) ans = tmp;
    }

    ll ans2=0;
    for(ll i=1;i<2*K+2;i++){
      ans2 += num[i].second;
    }
    l = 1, r = 2*K+2;
    before = ans2;
    while(r<num.size()){
      ll tmp = before;
      tmp -= num[l].second;
      tmp -= num[l+1].second;
      l += 2;
      tmp += num[r].second;
      tmp += num[r+1].second;
      r += 2;
      before = tmp;
      if(ans2<tmp) ans2 = tmp;
    }
    ans = max(ans,ans2);
  }

  cout << ans << endl;
}
