#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
#include <limits>
#include <type_traits>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int count=0;
  int n,k;
  int a,b,c;
  int i,j;
  cin >> n >> k;
  int km=k;
  int maxk=k*((n*2)/k);
  cout(maxk);
  for(a=1;a<=n;a++) {
    for(i=1,b=km-a;(km<=maxk) && (a<km) && (b<=n);i++,km=i*k) {
      int kl=k;
      for(j=1,c=kl-a;(kl<=maxk) && (a<kl) && (c<=n);j++,kl=j*k) {
        cout << "a=" << a << " " << "b=" << b << " " << "c=" << c << endl;
        if( (a>0&&b>0&&c>0) && (n>=a&&n>=b&&n>=c) && (b+c)%k==0 ) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}
