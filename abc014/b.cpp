#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
using namespace std;

int main(){
  ll n,x;
  cin >> n >> x;
  vector<ll> a(n);
  rep(i,n){
    cin >> a[i];
  }
  ll sum=0;
  for(ll i=0;i<n;i++){
    if((1<<i)&x){
      sum+=a[i];
    }
  }
  cout << sum << endl;
}
