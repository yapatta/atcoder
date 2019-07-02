#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  ll N,M,ans;
  cin >> N >> M;
  if( (N-2)*(M-2)>=0) ans = (N-2)*(M-2);
  else if(N==1 && M!=1) ans = M-2;
  else if(N!=1 && M==1) ans = N-2;
  else ans = 1;
  cout << ans << endl;
}
