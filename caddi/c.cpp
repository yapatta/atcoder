#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 1000000000001
using namespace std;

int main() {
  ull n, p;
  cin >> n >> p;
  ull max=1,i=2, x;
  if(n == 1) {
    cout << p << endl;
    return 0;
  }
  while((x=pow(i,n)) && (x<=p) ) {
    if(p % x == 0 ){
      max=i;
    }
    i++;
  }
  cout << max << endl;
  return 0;
}
