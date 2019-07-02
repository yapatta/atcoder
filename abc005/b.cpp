#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
using namespace std;

int main(){
  ll N;
  cin >> N;
  vector<ll> t(N);
  rep(i,N){
    cin >> t[i];
  }
  sort(All(t));
  cout << t[0] << endl;
}
