#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int printAns(int n) {
  int ans=0;
  while(n != 0) {
    ans += (n%10);
    n /= 10;
  }
  return ans;
}
int main() {
  int n,a,b;
  cin >> n >> a >> b;
  int count=0, max=0;
  for(int i=1;i<=n;i++) {
    int ans=printAns(i);
    if(a<=ans && ans<=b)
      max += i;
  }
  cout << max << endl;
}
