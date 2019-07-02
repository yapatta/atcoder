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
int A[MAX]={};
int main() {
  int n,k;
  cin >> n >> k;
  for(int i=0;i<n;i++) {
    int a;
    cin >> a;
    A[a]++;
  }
  vector<int> S;
  for(int i=1;i<=200000;i++) {
    if(A[i] != 0) {
      S.push_back(A[i]);
    }
  }
  sort(S.begin(), S.end());

  int count=S.size(), j=0, max=0;
  while(count > k) {
    count -= 1;
    max += S[j++];
  }
  cout << max << endl;

  return 0;
}
