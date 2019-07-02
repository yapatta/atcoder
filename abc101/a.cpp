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
#define MAX 10005
using namespace std;

int main() {
  string s;
  cin >> s;
  int count=0;
  for(int i=0;i<s.size();i++) {
    if(s[i]=='-') count--;
    else count++;
  }
  cout << count << endl;
  return 0;
}
