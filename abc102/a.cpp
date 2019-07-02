#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <limits>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 100005
using namespace std;

int main() {
  ull n;
  cin >> n;
  if(n%2 == 0) {
    cout << n << endl;
  }else {
    cout << n*2 << endl;
  }
  return 0;
}
