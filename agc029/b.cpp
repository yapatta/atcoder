#include <iostream>
#include <string>
#define MAX 200005
#define NIL -1
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
ll A[MAX];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  ll t;
  ll k = 0;
  for (int i = 0; i <= n-2; i++) {
    for(int j = i+1;j <= n-1;j++) {
      if(A[i] == NIL) break;

      t = A[i]+A[j];
      if ((t & (t - 1)) == 0) {
        k++;
        A[j] = NIL;
        break;
      }
    }
  }
  cout << k << endl;
  return 0;
}
