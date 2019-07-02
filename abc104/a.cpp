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
#define MAX 200005
using namespace std;

int main() {
  int r;
  cin >> r;
  if(r < 1200) cout << "ABC" << endl;
  else if(r < 2800) cout << "ARC" << endl;
  else cout << "AGC" << endl;
  return 0;
}
