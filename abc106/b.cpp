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
  int count=0;
  cin >> n;
  for(int k=1;k<=n; k+=2) {
    int c=0;
    for(int i=1;i<=k;i++) {
      if(k%i==0) c++;
    }
    if(c==8) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
