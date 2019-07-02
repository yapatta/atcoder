#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll N;
  cin >> N;
  vector<ll> a(N);
  ll cnt = 1, key = 0;
  bool f1,f2;
  cin >> a[0];
  for(ll i=1;i<N;i++){
    cin >> a[i];
    if(key == 0){
      if(a[i-1]<a[i]) {
        f1 = true;
        f2 = false;
      }else if(a[i-1]>a[i]){
        f1 = false;
        f2 = true;
      }else{
        continue;
      }
      key++;
    }else{
      if(f1){
        if(a[i-1]>a[i]){
          key = 0;
          cnt++;
          continue;
        }
      }else if(f2){
        if(a[i-1]<a[i]){
          key = 0;
          cnt++;
          continue;
        }
      }
      key++;
    }
  }
  cout << cnt << endl;
}
