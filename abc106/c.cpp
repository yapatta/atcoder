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
#define MAX 101
using namespace std;

int oneC(string S) {
  int count=0;
  for(int i=0;i<S.size();i++) {
    if(S[i] == '1') count++;
    else {
      break;
    }
  }
  return count;
}

int main() {
  string S;
  int k;
  cin >> S >> k;
  int one = oneC(S);
  if(one == 0) {
    cout << S[0] << endl;
  } else {
    if(k <= one) {
      cout << 1 << endl;
    } else {
      cout << S[one] << endl;
    }
  }
  return 0;
}
