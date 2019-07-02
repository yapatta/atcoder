#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int counter;
ll saiki(ll x);
int main(void) {
  ll x;
  scanf("%lld %d", &x, &counter);
  cout << LLONG_MAX << endl;
  printf("%lld\n", saiki(x));

  return 0;
}
ll saiki(ll x) {
  if(counter > 0){
    counter--;
    return x*saiki(x);
  }
  return 1;
}
