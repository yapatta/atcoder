#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "YES"
#define __FALSE "NO"
#define MAX 100001
using namespace std;

int main() {
  ll N,ans=0;
  cin >> N;
  vector<ll> a(N);
  for(int i=0;i<N;i++) {
    cin >> a[i];
  }
  sort(a.begin(),a.end());

  ll num=0;
  bool flag=true;
  for(int i=0;i<N-1;i++) {
    if(N%2!=0) i++;
    if(a[i]==a[i+1]) num++;
    else {
      if( (a[i+1]-a[i])%2 != 0) {
        flag=false;
        break;
      }
    }
  }
  if(N/2==num&&flag) {
    ans=pow(2,N/2);
  }else{
    ans=0;
  }
  cout << ans << endl;
}
