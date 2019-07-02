#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define All(x) (x).begin(),(x).end()
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans=N/2;
  int ama=N%2;
  if(ama!=0) cout << ans+ama << endl;
  else cout << ans << endl;
  for(int i=0;i<ans;i++){
    cout << 2 << endl;
  }
  if(ama!=0) cout << ama << endl;
}
