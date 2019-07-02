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
  bool flag=false;
  string s;
  cin >> s;
  if(s[0] == 'A') flag=true;

  int count=0,c=0;
  for(int i=2;i<s.size()-1;i++) {
    if(s[i]=='C') count++;
  }
  for(int i=1;i<s.size();i++) {
    if('a'<=s[i] && s[i]<='z') c++;
  }
  if(flag&&count==1&&c==s.size()-2) cout << "AC" << endl;
  else cout << "WA" << endl;
}
