#include <iostream>
#include <vector>
#include <numeric>
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
  for(int i = 0; i < n; i++)
    cout << h[i] << endl;
  ull hmax,hmin, max = 0, min = MAX;
  for(int i = 0; i < n-k+1; i++) {
    hmax = *max_element( h.begin()+i, h.begin()+i+k );
    hmin = *min_element( h.begin()+i, h.begin()+i+k );
    cout << hmax << " " << hmin << endl;
    if(max < hmax)
      max = hmax;
    if(min > hmin)
      min = hmin;
  }
  cout << hmax-hmin << endl;

  return 0;
}
