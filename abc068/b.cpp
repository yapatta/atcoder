#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  for(int i=n;i>=1;i--) {
    if( (i&(i-1)) == 0) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
