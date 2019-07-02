#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
  ll n;
  cin >> n;
  int min=n;
  for(int h=1;h*h<=n;h++) {
    for(int w=1;h*w<=n;w++) {
      if(min>(n-h*w)+llabs(h-w)) {
        min=n-h*w+llabs(h-w);
      }
    }
  }
  cout << min << endl;
}
