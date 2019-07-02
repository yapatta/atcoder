#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int N;
  vector<int> A;
  cin >> N;
  A.resize(N);
  for(int i=0;i<N;i++) {
    cin >> A[i];
  }
  sort(A.begin(),A.end());
  int ansA=0,ansB=0;
  for(int i= N-1;i>=0;i-=2) {
    ansA += A[i];
  }
  for(int i= N-2;i>=0;i-=2) {
    ansB += A[i];
  }
  cout << abs(ansA-ansB) << endl;
}
