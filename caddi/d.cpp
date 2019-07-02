#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 100005
using namespace std;
ull A[MAX];
int main() {
  int n,i;
  cin >> n;
  bool x = true;
  for(i=0;i<n;i++) {
    cin >> A[i];
    if(A[i]%2 != 0) {
      x=false;
      break;
    }
  }
  if(x) {
    cout << "second" << endl;
  } else {
    cout << "first" << endl;
  }
  return 0;
}
