#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll a,b;
  cin >> a >> b;
  //どちらか0なら, 絶対正
  if(a<=0 && 0<=b){
    cout << "Zero" << endl;
    return 0;
    }
  if(0 < a){
    cout << "Positive" << endl;
  }else if(b < 0){
    if((b-a)%2==0) cout << "Negative" << endl;
    else cout << "Positive" << endl;
  }
}
