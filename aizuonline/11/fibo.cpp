#include <iostream>
using namespace std;
typedef long long ll;
#define MAX 50
ll num[MAX];
int main() {
  int n;
  cin >> n;
  num[0] = num[1] = 1;
  for (int i = 2; i <= n; i++) {
    num[i] = num[i-1] + num[i-2];
  }
  cout << num[n] << endl;
  return 0;
}
