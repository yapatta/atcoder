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
#define __TRUE "Yes"
#define __FALSE "No"
using namespace std;

int main() {
  vector<int> a(3);
  int k;
  cin >> a[0] >> a[1] >> a[2];
  cin >> k;
  int max=0;
  sort(a.begin(),a.end());
  for(int i=0;i<k;i++) {
    a[2] *= 2;
  }
  max=a[0]+a[1]+a[2];
  cout << max << endl;
  return 0;
}
