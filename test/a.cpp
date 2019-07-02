#include <iostream>
using namespace std;

int main(void) {
  int a, b,c;
  cin >> a >> b >> c;
  bool x = false;
  if(a == 5 && b == 5 && c == 7) x = true;
  else if(a == 5 && b == 7 && c == 5) x = true;
  else if(a == 7 && b == 5 && c == 5) x = true;

  if(x) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
