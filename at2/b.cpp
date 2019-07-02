#include <iostream>
#define XX 1000000007
using namespace std;
typedef  unsigned long long ull;
int main() {
  ull a, b, c;
  cin >> a >> b>> c;
  ull min = XX, other;
  if(a*b%XX < min) {
    min = a*b%XX;
    other = c;
  }
  if(b*c%XX < min) {
    min = b*c%XX;
    other = a;
  }
  if(c*a%XX < min) {
    min = c*a%XX;
    other = b;
  }
  cout << min*other%XX << endl;

  return 0;
}
