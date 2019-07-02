#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
using namespace std;

int main(){
  ll N,sum=0,count=0;
  cin >> N;
  vector<ll> a(N);
  rep(i,N){
    ll a;
    cin >> a;
    if(a>0) {
      count++;
      sum += a;
    }
  }
  if(sum%count==0) cout << sum/count << endl;
  else cout << sum/count+1 << endl;
}
