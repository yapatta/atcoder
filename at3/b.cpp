#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++)
    cin >> p[i];
  int max = 0;
  for (int i = 0; i < n; i++) {
    if(max < p[i]) {
      max = p[i];
    }
  }
  int sum = accumulate(p.begin(), p.end(), 0);
  sum -= max/2;
  cout << sum << endl;

  return 0;
}
