#include <iostream>
#include <string>
#define MAX 200005
typedef long long ll;
using namespace std;
string S;
ll a[MAX];

int main() {
  cin >> S;
  ll w = 0;
  ll l = S.size();
  for (ll i = 0; i < l; i++) {
    if(S[i] == 'W') {
      a[w++] = i;
    }
  }
  if(w == l || w == 0) {
    cout << 0 << endl;
    return 0;
  }
  ll counter = 0;
  for (ll i = 0;i < w; i++) {
    counter += (a[i]-i);
  }
  cout << counter << endl;
  return 0;
}
