#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 10005
using namespace std;

int main() {
  ull a, b, i, max;
  cin >> a >> b;
  for(i=1;i<=b-a;i++) {
    max += i;
  }
  cout << max-b << endl;
  return 0;
}
