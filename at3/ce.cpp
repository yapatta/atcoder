#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
#define MAX 1000000000

int main() {
  int n,k;
  cin >> n >> k;
  vector<ull> h(n);
  for(int i = 0; i < n; i++)
    cin >> h[i];
  sort(h.begin(), h.end());
  ull hmax,hmin,hsa, sa = MAX;
  for(int i = 0; i < n-k+1; i++) {
    hmin = h[i];
    hmax = h[i+k-1];
    hsa = hmax-hmin;
    if(sa > hsa)
      sa = hsa;
  }
  cout << sa << endl;

  return 0;
}
