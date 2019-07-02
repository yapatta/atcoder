#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define reptr(i,n) for(int (i)=(n);i>=0;--(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int main() {
  ll N,sum=0,ans;
  cin >> N;
  vector<ll> a(N);
  rep(i,N) {
    cin >> a[i];
    sum += a[i];
  }
  if(sum%N!=0) {
    cout << -1 << endl;
    return 0;
  }
  ans=sum/N;
  ll tmp=0,c=0,num=0;
  rep(i,N) {
    tmp+=a[i];
    c++;
    if(tmp==ans*c) {
      num+=(c-1);
      tmp=0;
      c=0;
    }
  }
  cout << num << endl;
}
