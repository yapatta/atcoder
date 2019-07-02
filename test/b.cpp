#include <iostream>
using namespace std;

int main() {
  int a, b, ans;
  cin >> a >> b >> ans;
  if(a-b == ans && a+b == ans) cout << "?" << endl;
  else if(a-b == ans && a+b != ans) cout << "-" << endl;
  else if(a-b != ans && a+b == ans) cout << "+" << endl;
  else cout << "!" << endl;

  return 0;
}
