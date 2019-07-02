#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

struct point{
  ll x,y;
};

int main() {
  ll X,Y,A,B;
  point s,t;
  cin >> X >> Y >> A >> B;
  cin >> s.x >> s.y >> t.x >> t.y;
  if( ((B-A)*s.x-X*s.y+X*A) * ((B-A)*t.x-X*t.y+X*A) > 0 ){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}
