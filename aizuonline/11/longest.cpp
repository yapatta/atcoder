#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
#define MAX 1005
int A[MAX][MAX];

int main() {
  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    string a, b;
    cin >> a >> b;
    int al = a.size();
    int bl = b.size();
    for (int j = 0; j <= al; j++) A[j][0] = 0;
    for (int j = 0; j <= bl; j++) A[0][j] = 0;

    for (int j = 1; j <= al; j++) {
      for(int k = 1; k <= bl; k++) {
        if(a[j-1] == b[k-1])
          A[j][k] = A[j-1][k-1] + 1;
        else
          A[j][k] = max(A[j-1][k], A[j][k-1]);
      }
    }
    cout << A[al][bl] << endl;
  }

  return 0;
}
