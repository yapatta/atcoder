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

int main(){
  int N,X,Y;
  cin >> N >> X >> Y;
  int t=X,ao=Y;
  vector<int> a(N);
  rep(i,N){
    cin >> a[i];
  }
  sort(Rall(a));
  for(int i=0;i<N;i++){
    if(i%2==0) t += a[i];
    else ao += a[i];
  }
  if(t>ao) cout << "Takahashi" << endl;
  else if(t<ao) cout << "Aoki" << endl;
  else cout << "Draw" << endl;
}
