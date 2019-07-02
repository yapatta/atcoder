#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int com(int s) {
  int count = 0;
  while(s > 0) {
    if(s % 10 == 2) count++;
    s /= 10;
  }
  return count;
}
int main() {
  int t;
  cin >> t;
  cout << com(t) << endl;
  return 0;
}
