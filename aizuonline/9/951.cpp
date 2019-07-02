#include <iostream>
#include <set>
using namespace std;
#define reps(i, s, n) for((i)=(s);(i)<(n);(i)++)
#define rep(i, n) reps(i, 0, n)

#define i(x) insert((x))

void print(set<int> S) {
  cout << S.size() << endl;
  for(set<int>::iterator it=S.begin();it != S.end();it++) {
    cout << " " << (*it);
  }
  cout << endl;
}

int main() {
  set<int> S;
  S.i(8);
  S.i(1);
  S.i(7);
  S.i(4);
  S.i(8);
  S.i(4);

  print(S);

  return 0;
}
