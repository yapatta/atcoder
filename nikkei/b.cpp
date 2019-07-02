#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  ll n,sum=0;
  string a,b,c;
  cin >> n >> a >> b >> c;
  for(int i=0;i<n;i++) {
    ll count=0;
    if(a[i]!=b[i]) {
      count++;
    }
    if(b[i]!=c[i]) {
      count++;
    }
    if(a[i]!=c[i]) {
      count++;
    }
    if(count==3) {
      sum+=2;
    }else if(count==2) {
      sum+=1;
    }else if(count==1) {
      sum+=1;
    }
  }
  cout << sum << endl;

  return 0;
}
