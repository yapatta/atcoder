#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
const ll MOD=1e9+7;
using namespace std;
int gcd(int a, int b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}

int main() {
  int a,b,k;
  cin >> a >> b >> k;
  int count=0;
  int g=gcd(a,b);
  vector<int> v;
  for(ll i=1;i<=g;i++){
    if(a%i==0&&b%i==0){
      count++;
      v.push_back(i);
    }
  }
  sort(All(v));
  cout << v[v.size()-k] << endl;
}
