#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
const ll MOD=1e9+7;
using namespace std;

int main() {
  ll N;
  cin >> N;
  vector<ll> a(N);
  rep(i,N){
    cin >> a[i];
  }
  sort(All(a));
  ll tmp=a[0],count=1,sum=0;
  for(ll i=1;i<N;i++){
    if(tmp==a[i]){
      count++;
    }else{
      sum += (count%2==1) ? 1 : 0;
      count=1;
      tmp=a[i];
    }
  }
  sum += (count%2==1) ? 1 : 0;
  cout << sum << endl;
}
