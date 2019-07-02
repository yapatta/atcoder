#include <iostream>
using namespace std;
int A[102];

int main() {
  int n, a, b, k;
  cin >> n >> a >> b >> k;
  for (int i = 0; i <= k; i++) A[i] = 0;
  int p;
  A[a]++, A[b]++;
  for (int i = 0; i < k; i++) {
    cin >> p;
    A[p]++;
  }
  if(k+2 > n) {
    cout << "NO" << endl;
    return 0;
  }
  bool x = true;
  for (int i = 1; i <= n; i++) {
    if(A[i] > 1) {
      x = false;
      break;
    }
  }
  if(x) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
