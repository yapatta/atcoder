#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;
const ll KEY=1e18;

int main() {
  ll N,sum=0;
  cin >> N;
  vector<ll> a(N),b(N+1);
  rep(i,N){
    cin >> a[i];
  }
  b[0]=0;
  for(ll i=1;i<=N;i++){
    b[i]=b[i-1]+a[i-1];
  }
  sort(All(b));
  ll tmp=b[0],count=1;
  for(ll i=1;i<b.size();i++){
    if(tmp==b[i]){
      count++;
    }else{
      sum+=(count*(count-1)/2);
      tmp=b[i];
      count=1;
    }
  }
  sum+=(count*(count-1)/2);
  cout << sum << endl;
}
