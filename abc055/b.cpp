#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 1000000007
using namespace std;

int main() {
  ull n,ans=1;
  cin >> n;
  for(ull i=1;i<=n;i++) {
    ans *= i;
    if(ans>=MAX) {
      ans %= MAX;
    }
  }
  cout << ans%MAX << endl;
}
