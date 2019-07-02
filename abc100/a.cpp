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
#define MAX 3005
using namespace std;

int main() {
  int a, b;
  string s;
  cin >> a >> b;
  if(a<=8&&b<=8) {
    s="Yay!";
  } else {
    s=":(";
  }
  cout << s <<endl;
  return 0;
}
