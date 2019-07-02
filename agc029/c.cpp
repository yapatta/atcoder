#include <iostream>
#define MAX 200005
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
char A[MAX];

int main() {
  int n
  ll k, before, c = 0, leng;
  cin >> n;
  cin >> k;
  for (int i = 0; i < n; i++) {
    before = k;
    cin >> k;
    if(before < k) {leng = k}
    if(before == k) {
      leng = k;
      c++;
    }
    if(before > k) {
      if(leng == 1) 
      leng = k;
    }
  }



  return 0;
}
