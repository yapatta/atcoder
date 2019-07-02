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
  int N;
  cin >> N;
  vector<int> v(N),c(N),a(N);
  rep(i,N){
    cin >> v[i];
  }
  rep(i,N){
    cin >> c[i];
  }
  rep(i,N){
    a[i] = v[i] - c[i];
  }
  sort(All(a));
  int ans = 0,i=N-1;
  while(1){
    if(a[i]>0){
      ans += a[i];
      i--;
    }else{
      break;
    }
  }
  cout << ans << endl;
}
