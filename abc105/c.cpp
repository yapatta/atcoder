#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
#include <limits>
#include <type_traits>
#include <bitset>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 101
using namespace std;

int main() {
  ll N;
  cin >> N;
  string ans;

  while(N!=0) {
    if(N%2 != 0) {
      N--;
      ans = "1" + ans;
    } else {
      ans = "0" + ans;
    }
    N /= -2;
  }
  if(ans=="") ans="0";
  cout << ans << endl;
  return 0;
}
