#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  ll N,Y;
  cin >> N >> Y;
  ll a=10000,b=5000,c=1000;
  for(ll x=Y/a;x>=0;x--) {
    ll money=Y,num;
    money = Y-x*a;
    for(ll y=money/b;y>=0;y--) {
      money = Y-x*a-y*b;
      ll z=money/c;
      num=x+y+z;
      if(num==N) {
        cout << x << " " << y << " " << z << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
}
