#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int main() {
  vector<int> a(5);
  rep(i,5){
    cin >> a[i];
  }
  cout << max(a[4]+a[3]+a[0],a[4]+a[2]+a[1]) << endl;
}
