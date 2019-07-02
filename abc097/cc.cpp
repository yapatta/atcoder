#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;
  vector<string> T;
  for(int i=0;i<s.size();i++) {
    for(int j=1;j<=k;j++) {
      T.push_back(s.substr(i,j));
    }
  }
  sort(T.begin(), T.end());
  T.erase(unique(T.begin(), T.end()), T.end());
  cout << T[k-1] << endl;
}
