#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  int N,K;
  ll ans=0;
  cin >> N >> K;
  ans=K*pow(K-1,N-1);
  cout << ans << endl;
}
