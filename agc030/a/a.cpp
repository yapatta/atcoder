#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 10005
using namespace std;

int main() {
  ll a,b,c;
  cin >> a >> b >> c;
  if(c > a+b) {
    c=a+b+1;
  }
  cout << c+b<< endl;

  return 0;
}
