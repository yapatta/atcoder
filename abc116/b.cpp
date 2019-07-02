#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  int s;
  cin >> s;
  int a[1000005];
  a[0]=s;
  int i=0;
  while(1) {
    if(a[i]%2==0) {
      i++;
      a[i]=a[i-1]/2;
    }else {
      i++;
      a[i]=3*a[i-1]+1;
    }
    for (int k=0;k<i;k++) {
      if(a[i] == a[k]) {
        cout << i+1 << endl;
        return 0;
      }
    }
  }
}
