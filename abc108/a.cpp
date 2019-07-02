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
  int k;
  cin >> k;
  int gu, ki;
  gu = k/2;
  if(k%2 == 0) {
    ki = gu;
  } else {
    ki = gu+1;
  }
  cout << ki*gu << endl;
  return 0;
}
