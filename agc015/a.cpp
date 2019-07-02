#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll N,A,B;
  cin >> N >> A >> B;
  if(A>B || N<=1) {
    if(A==B){
      cout << 1 << endl;
    }else{
      cout << 0 << endl;
    }
    return 0;
  }
  cout << (B-A)*(N-2)+1 << endl;
}
