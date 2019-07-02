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
#define fi first
#define se second
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll N;
  cin >> N;
  ll c=0;
  for(ll i=0;i*i<=N;i++){
    c = i;
  }
  ll key = c;
  ll ans = 0;
  for(ll i=1;i<=key;i++){
    if(N%i==0){
      ll tmp = (N/i)-1;
      if(tmp==0) continue;
      if(N/tmp == N%tmp){
        ans += (N/i);
        ans--;
        //cout << (N/i)-1 << endl;
      }
    }
  }
  cout << ans << endl;
}
