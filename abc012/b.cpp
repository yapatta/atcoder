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
  int N;
  cin >> N;
  int h,m,s;
  h=N/3600;
  m=(N-h*3600)/60;
  s=N-h*3600-m*60;
  if(h<10) cout << "0" << h;
  else cout << h;
  cout << ":";
  if(m<10) cout << "0" << m;
  else cout << m;
  cout << ":";
  if(s<10) cout << "0" << s;
  else cout << s;
  cout << endl;
}
