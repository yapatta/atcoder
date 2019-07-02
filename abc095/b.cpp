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
  int n,x;
  cin >> n >> x;
  vector<int> m(n);
  int max=0,count=0;
  for(int i=0;i<n;i++) {
    cin >> m[i];
    max += m[i];
    count++;
  }
  sort(m.begin(), m.end());
  int
  while(1) {
    max += m[0];
    if(max <= x) count++;
    else break;
  }
  cout << count << endl;
  return 0;
}
