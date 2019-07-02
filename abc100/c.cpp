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

int main() {
  int n, count=0;
  ull a;
  cin >> n;
  for(int i=0;i<n;i++) {
    cin >> a;
    while(a>0 && a%2 == 0) {
      a/=2;
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
