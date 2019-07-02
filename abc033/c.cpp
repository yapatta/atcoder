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
ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  ll tmp=gcd(a,b);
  return (a/tmp)*(b/tmp)*tmp;
}

int main() {
  string s;
  cin >> s;
  bool flag=true;
  int sum=0;
  rep(i,s.size()){
    if(s[i]=='0'){
      flag=false;
    }
    if(s[i]=='+'){
      if(flag){
        sum++;
      }
      flag=true;
    }
  }
  if(flag){
    sum++;
  }

  cout << sum << endl;
}
