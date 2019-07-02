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

//Mの公約数を配列に格納
//Mにおける任意の公約数をsと置くと, N<=M/sを満たす、最大のsの値がanser

//pn: ルートM以下の素数を格納
vector<ll> pn;
//cd: 約数が入ったpair, first: 素数, second: その素数が何個入っているか
vector<pair<ll,ll> > cd;

void set_prime(ll n){
	for(ll i=2;i*i<=n;i++){
		if(n%i==0)return;
	}
	pn.push_back(n);
  return;
}

int main(){
  ll N,M;
  cin >> N >> M;

  for(ll n=2;n<=M;n++){
    //もし偶数ならばpnにpush
		set_prime(n);
	}

  ll key = M;
  auto itr = pn.begin();
  while(1){
    if(key%(*itr)==0){
      ll cnt = 0;
      while(1){
        key /= (*itr);
        cnt++;
        if(key%(*itr) != 0){
          break;
        }
      }
      cd.push_back(make_pair((*itr),cnt));
    }
    if(key==1){
      break;
    }
    itr++;
  }
  for(ll i=0;i<cd.size();i++){
    cout << cd[i].first << " " << cd[i].second << endl;
  }

}
