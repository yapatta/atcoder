#include <iostream>
using namespace std;
#define MAX 100005
int A[MAX];

int main() {
  int n;
  cin >> n;
  int a, count = 0;
  for (int i = 0; i < n; i++) A[i] = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    A[a]++;
    if(A[a] > 1) count++;
  }
  cout << count << endl;
  return 0;
}
