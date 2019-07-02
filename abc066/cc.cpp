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
ll num[200100];

int main(){
  ll n;
  cin >> n;
  ll left=100049,right=100050;
  if(n%2==0){
    rep(i,n){
      ll a;
      cin >> a;
      if(i%2==0) num[right++]=a;
      else num[left--]=a;
    }
    for(ll i=left+1;i<right;i++){
      if(i!=left+1) cout << " ";
      cout << num[i];
    }
    cout << endl;
  }else{
    rep(i,n){
      ll a;
      cin >> a;
      if(i%2==0) num[left--]=a;
      else num[right++]=a;
    }
    for(ll i=left+1;i<right;i++){
      if(i!=left+1) cout << " ";
      cout << num[i];
    }
    cout << endl;
  }
}
