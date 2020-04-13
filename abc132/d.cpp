#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

ll N,K;
vector<ll> ans;

ll fuct(ll n) {
	if (n==0 or n==1) return 1;
    else return n*fuct(n-1)%MOD;
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

ll comb(ll n, ll k) {
	ll retval = ((fuct(n) * calc(fuct(k), MOD-2))%MOD * calc(fuct(n-k), MOD-2))%MOD;
	return retval;
}

int main(){
	cin >> N >> K;
	ans = vector<ll>(K,0);
	ll key = min(N-K+1,K);
	//i回の操作で, 
	for(int i=1;i<=key;i++)
	{
		ans[i-1] = (comb(N-K+1,i) * comb(K-1,i-1)) % MOD;
	}
	for(int i=0;i<K;i++)
	{
		cout << ans[i] << endl;
	}
}
