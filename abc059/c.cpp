#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }
  //先頭を正にする
  ll sum1=0,ans1=0;
  for(int i=0;i<n;i++) {
    sum1 += a[i];

    if(i%2==0) {
      if(sum1<=0) {
        ans1 += -sum1+1;
        sum1 = 1;
      }
    }else {
      if(sum1>=0) {
        ans1 += sum1+1;
        sum1 = -1;
      }
    }
  }
  //先頭を負にする
  ll sum2=0,ans2=0;
  for(int i=0;i<n;i++) {
    sum2 += a[i];

    if(i%2==0) {
      if(sum2>=0) {
        ans2 += sum2+1;
        sum2 = -1;
      }
    }else {
      if(sum2<=0) {
        ans2 += -sum2+1;
        sum2 = 1;
      }
    }
  }
  cout << min(ans1,ans2) << endl;
}
