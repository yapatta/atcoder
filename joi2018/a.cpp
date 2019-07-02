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

int main(){
  ll a,b,c;
  cin >> a >> b >> c;
  ll sum=0,count=0;
  while(sum<c){
    sum+=a;
    count++;
    if(count%7==0){
      sum+=b;
    }
  }
  cout << count << endl;
}
