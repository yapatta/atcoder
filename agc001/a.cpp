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
  vector<int> l(2*N);
  rep(i,2*N){
    cin >> l[i];
  }
  sort(All(l));
  int ans = 0;
  for(int i=0;i<2*N;i+=2){
    ans += l[i];
  }
  cout << ans << endl;
}
