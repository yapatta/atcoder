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
#define MAX 28
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  string a,b;
  int max=0;
  for(int i=1;i<n;i++) {
    a = s.substr(0,i);
    b = s.substr(i);
    int count=0;
    vector<int> A(27,0),B(27,0);
    for(int j=0;j<a.size();j++) {
      A[a[j]-'a']++;
    }
    for(int j=0;j<b.size();j++) {
      B[b[j]-'a']++;
    }
    for(int j=0;j<A.size();j++) {
      if(A[j]>0 && B[j]>0) count++;
    }
    if(max<count) max=count;
  }
  cout << max << endl;
  return 0;
}
