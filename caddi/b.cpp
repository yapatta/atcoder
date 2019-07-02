#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
#define MAX 1005
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ull A[MAX], B[MAX];

int main() {
  int n,i;
  ull h,w;
  cin >> n >> h >> w;
  for(i=0;i<n;i++) {
    cin >> A[i] >> B[i];
  }
  int count=0;
  for(i=0;i<n;i++) {
    if((A[i]>=h&&B[i]>=w) ) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
