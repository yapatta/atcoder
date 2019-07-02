#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  if(2*k-1<=n)cout << "YES" << endl;
  else cout << "NO" << endl;
}
