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
  ll N;
  string s;
  cin >> N >> s;
  ll b=0,w=0;
  vector<ll> sa(N+1), rsa(N+1);
  sa[0] = 0;
  for(ll i=0;i<N;i++){
    if(s[i]=='#') b++;
    else w++;
    sa[i+1] = w-b;
  }

  b=0,w=0;
  for(ll i=0;i<N;i++){
    if(s[N-1-i]=='#') b++;
    else w++;
    rsa[i+1] = b-w;
  }

  vector<pair<ll,ll> > ans(N+1);
  for(ll i=0;i<=N;i++){
    ans[i] = make_pair(sa[i]+rsa[N-i], i);
    //cout << sa[i] << " " << rsa[N-i] << endl;
  }
  sort(All(ans));
  //cout << ans[N].second << endl;
  ll cnt = 0;
  for(ll i=0;i<ans[N].second;i++){
    if(s[i]!='.') cnt++;
  }
  for(ll i=ans[N].second;i<N;i++){
    if(s[i]!='#') cnt++;
  }
  cout << cnt << endl;
}
