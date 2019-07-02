#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  int n,ans=0;
  cin >> n;
  for(int i=1;i<=n;i++) {
    ans +=(10000*i);
  }
  cout << ans/n << endl;
}
