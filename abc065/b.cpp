#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }

  int num=a[0],count=0;
  while(count<=n) {
    count++;
    if(num==2) {
      break;
    }
    num=a[num-1];
  }
  if(count==n+1) count=-1;
  cout << count << endl;
}
