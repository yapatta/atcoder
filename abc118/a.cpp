#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 200005
using namespace std;
const ll MOD=1e9+7;

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  return a*b/gcd(a,b);
}

int main(){
  int a,b;
  cin >> a >> b;
  if(b%a==0){
    cout << a+b << endl;
  }else{
    cout << b-a << endl;
  }
}
