#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 10005
using namespace std;

ull mm(ull n) {
  ull max=0;
  while(n > 0) {
    max += n%10;
    n /= 10;
  }
  return max;
}

int main() {
  ull n;
  cin >> n;
  if(n%mm(n) == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
