#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 100005
using namespace std;
const ll MOD=1e9+7;

int main(){
  int a,b,big,small;
  cin >> a >> b;
  if(a>b){
    big=a;
    small=b;
  }else{
    big=b;
    small=a;
  }
  int tmp=abs(big-small);
  int tmp2=abs(small+10-big);
  cout << min(tmp,tmp2) << endl;
}
