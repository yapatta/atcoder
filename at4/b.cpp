#include <iostream>
using namespace std;

char a[55][55];
int main() {
  int n, i, j;
  cin >> n;
  for (i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      char s;
      cin >> s;
      a[j][n-1-i] = s;
    }
  }
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}
