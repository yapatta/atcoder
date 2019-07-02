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
#define MAX 1005
using namespace std;

int main() {
  int n;
  double T, A;
  cin >> n >> T >> A;
  double h,ab;
  int count;
  ab=100005;
  for(int i=1;i<=n;i++) {
    double temp;
    cin >> h;
    temp=T-h*0.006;
    if(abs(ab-A) >= abs(temp-A)) {
      ab=temp;
      count = i;
    }
  }
  cout << count << endl;
  return 0;
}
