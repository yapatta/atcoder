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
  int n,k;
  cin >> n >> k;
  vector<int> A(n);
  for(int i=0;i<n;i++) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  A.push_back(0);
  vector<int> S;
  int c=0;
  for(int i=0;i<n;i++) {
    c++;
    if(A[i] != A[i+1]) {
      S.push_back(c);
      c=0;
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
