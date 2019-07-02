#include <iostream>
#include <cmath>
#define MAX 100005
using namespace std;
int A[MAX];
int B[MAX];

int main() {
  int n, i;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> A[i];
  }
  B[0] = 0;
  B[1] = abs(A[1]-A[0]);
  for (i = 2; i < n; i++) {
    B[i] = min(B[i-1]+abs(A[i]-A[i-1]), B[i-2]+abs(A[i]-A[i-2]));
  }
  cout << B[n-1] << endl;

  return 0;
}
