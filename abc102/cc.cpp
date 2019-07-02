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
  int n;
  ll a;
  cin >> n;
  vector<ll> B(n);
  for(int i=0;i<n;i++) {
    cin >> a;
    B[i] = a-(i+1);
  }
  sort(B.begin(), B.end());
  ll half;
  if(n%2 == 0) {
    half = (B[n/2-1]+B[n/2]) / 2;
  } else {
    half = B[n/2];
  }
  ll max=0;
  for(int i=0;i<n;i++) {
    max += abs(B[i]-half);
  }
  cout << max << endl;
  return 0;
}
