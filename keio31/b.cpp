#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  int a,b,k;
  cin >> a >> b >>k;
  int key = 0;
  for(int i=100;i>=1;i--){
    if(a%i==0 && b%i==0) key++;
    if(key==k){
      cout << i << endl;
      return 0;
    }
  }
}
