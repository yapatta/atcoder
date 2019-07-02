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
#define MAX 105
using namespace std;
string W[MAX];
int main() {
  int n;
  cin >> n;
  bool flag=true;
  for(int i=0;i<n;i++) {
    cin >> W[i];
  }
  for(int i=0;i<n-1;i++) {
    for(int k=i+1;k<n;k++) {
      if(W[i] == W[k]) {
        flag = false;
        break;
      }
    }
  }
  if(flag) {
    for(int i=0;i<n-1;i++) {
      if(W[i][W[i].size()-1] != W[i+1][0]) {
        flag = false;
        break;
      }
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
