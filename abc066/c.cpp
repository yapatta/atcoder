#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
const int nmax=8;
using namespace std;

int main(){
  ll n;
  cin >> n;
  deque<ll> b;
  if(n%2==0){
    rep(i,n){
      ll a;
      cin >> a;
      if(i%2==0) b.push_back(a);
      else b.push_front(a);
    }
    for(ll i=0;i<b.size();i++){
      if(i!=0) cout << " ";
      cout << *(b.begin()+i);
    }
    cout << "\n";
  }else{
    rep(i,n){
      ll a;
      cin >> a;
      if(i%2==0) b.push_front(a);
      else b.push_back(a);
    }
    for(ll i=0;i<b.size();i++){
      if(i!=0) cout << " ";
      cout << *(b.begin()+i);
    }
    cout << "\n";
  }
}
