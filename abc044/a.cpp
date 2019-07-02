#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  ll N,K,X,Y;
  cin >> N >> K >> X >> Y;
  if(N>=K) cout << (K*X)+((N-K)*Y) << endl;
  else cout << N*X << endl;
}
