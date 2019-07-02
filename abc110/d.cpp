#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD = 1e9+7;
using namespace std;

vector<int> ps;
void set_prime(int n){
  if(n==2) {
    ps.push_back(n);
    return;
  }
  else if(n%2==0) return;
	for(int i=3;i*i<=n;i+=2){
		if(n%i==0)return;
	}
	ps.push_back(n);
}

ll exFuct(ll n) {
    if (n==1) return 1;
    else return (n*exFuct(n-1));
}
//n!
ll fuct(ll n) {
    if (n==1) return 1;
    else return (n*fuct(n-1))%MOD;
}
//aのb乗
ll calc(ll a, ll b) {
    if (b==0){
      return 1;
    }else if (b==1){
      return a;
    }else if (b%2==0){
      ll tmp=calc(a,b/2);
      return tmp*tmp%MOD;
    }else{
      return a*calc(a,b-1)%MOD;
    }
}

//comb計算
ll comb(ll a, ll b){
  return ((fuct(a)%MOD) * (calc(fuct(a-b), MOD-2)%MOD) * (calc(fuct(b), MOD-2)%MOD) )%MOD;
}


int main(){
  /*
  for(int i=2;i<100000;i++){
    //もし偶数ならばpsにpush
		set_prime(i);
		//10000までの素数をpsにpush
	}
  */

  ll N,M;
  cin >> N >> M;
  ll key = M;
  auto itr = ps.begin();
  vector<pair<ll,ll> > cd;
  ll i = 2;
  while(i<=key){
    if(key%i==0){
      ll cnt = 0;
      while(1){
        key /= i;
        cnt++;
        if(key%i!=0){
          cd.push_back(make_pair(i,cnt));
          break;
        }
      }
    }
    if(key==1) break;
    i++;
  }
  //Mが素数のとき
  if(cd.size()==0){
    cout << N << endl;
    return 0;
  }

  ll ans = 1;
  rep(i,cd.size()){
    //cout << cd[i].first << " " << cd[i].second << endl;
    ans *= comb(cd[i].second + N -1, cd[i].second);
    ans %= MOD;
  }
  cout << ans << endl;
}
