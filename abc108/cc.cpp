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
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  ll n,k;
  cin >> n >> k;
  ll count=(n/k)*(n/k)*(n/k);
  if(k%2 == 0) {
    ll x = n/(k/2) - n/k;
    count += x*x*x;
  }
  cout << count << endl;
  return 0;
}
