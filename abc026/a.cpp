#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int main() {
  int a;
  cin >> a;
  int max=a-1;
  for(int i=1;i<a;i++) {
    int tmp=a-i;
    if(max<i*tmp) {
      max=i*tmp;
    }
  }
  cout << max << endl;
}
