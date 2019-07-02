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

int main(){
  ll n;
  string s;
  cin >> n >> s;
  ll al[26]={};
  rep(i,n){
    al[s[i]-'a']++;
  }

  ll countA=0,ans=1;
  rep(i,26){
    if(al[i]>0) {
      ans *= (al[i]+1);
      ans %= MOD;
    }
  }
  ans--;
  cout << ans << endl;
}
