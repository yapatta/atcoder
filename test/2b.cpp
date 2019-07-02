#include <iostream>
using namespace std;
int keta(int x, int i);
int main() {
  int a, b;
  cin >> a >> b;
  int bk = keta(b, 0);
  int ze = 1;
  for (int i = 0; i < bk; i++) {
    ze *= 10;
  }
  int ans = (a*ze + b)*2;
  cout << ans << endl;

  return 0;
}

int keta(int x, int i) {
  if(x / 10 == 0) return i+1;
  return keta(x/10, i+1);
}
