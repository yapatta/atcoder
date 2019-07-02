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
#define MAX 15
using namespace std;
int main() {
  string n;
  cin >> n;
  for(int i=0;i<n.size();i++) {
    if(n[i]=='1') n[i]='9';
    else n[i]='1';
  }
  cout << n << endl;

  return 0;
}
