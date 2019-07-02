#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;

int main(){
  ll n,t,ans=0;
  cin >> n >> t;
  vector<ll> a(n);
  rep(i,n){
    cin >> a[i];
  }
  for(ll i=0;i<n-1;i++){
    if(a[i+1]-a[i]>t){
      ans+=t;
    }else{
      ans+=(a[i+1]-a[i]);
    }
  }
  //最後は絶対t秒間開く
  ans+=t;
  cout << ans << endl;
}
