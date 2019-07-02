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
  ll n,sum=0;
  cin >> n;
  vector<ll> a(n);
  rep(i,n){
    cin >> a[i];
    for(ll key=a[i];key>=0;key--){
      if(key%6==3||key%6==1){
        sum +=(a[i]-key);
        break;
      }
    }
  }
  cout << sum << endl;
}
