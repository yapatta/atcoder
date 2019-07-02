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
#define __TRUE "Yes"
#define __FALSE "No"
using namespace std;

int main() {
  string s;
  cin >> s;
  int max=700;
  for(int i=0;i<s.size();i++) {
    if(s[i] == 'o') {
      max += 100;
    }
  }
  cout << max << endl;
  return 0;
}
