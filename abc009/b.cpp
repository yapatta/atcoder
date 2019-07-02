#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 100005
using namespace std;
const ll MOD=1e9+7;

int main(){
  ll N;
  cin >> N;
  vector<ll> a(N);
  rep(i,N){
    cin >> a[i];
  }
  sort(All(a));
  ll tmp=a[a.size()-1],count=1;
  for(ll i=a.size()-2;i>=0;i--){
    if(tmp!=a[i]){
      count++;
      if(count==2){
        cout << a[i] << endl;
        return 0;
      }
    }
    tmp=a[i];
  }
}
