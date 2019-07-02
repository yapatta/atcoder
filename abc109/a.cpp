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
  int a,b;
  cin >> a >> b;
  if(a%2!=0 && b%2!=0) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }
  return 0;
}
