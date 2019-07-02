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
const ll INF=1e10+1;
using namespace std;
#define NOT_EXIST -1

int dy[]={1,-1,0,0,1,1,-1,-1,0};
int dx[]={0,0,1,-1,1,-1,1,-1,0};

int main(){
	ll N,M;
	cin >> N >> M;
	vector<ll> a(N);
	vector<pll> cb(M);

	rep(i,N){
		cin >> a[i];
	}
	rep(i,M){
		ll b,c;
		cin >> b >> c;
		cb[i] = make_pair(c,b);

	}
	sort(All(a));
	sort(All(cb));
	ll max_c = cb[M-1].first , key = -1;

	ll ans = 0;

	for(ll i=N-1;i>=0;i--){
		if(max_c<=a[i]){
			ans += a[i];
		}else{
			key = i;
			break;
		}
	}
	//cout << ans << endl;

	if(key == -1){
		cout << ans << endl;
		return 0;
	}

	ll cnt = M-1;

	ll i = 0;
	while(i <= key){
		if(a[i] < cb[cnt].first){
			ll j=0;
			while(j < cb[cnt].second && a[i+j] < cb[cnt].first){
				if(i+j > key) break;
				a[i+j] = cb[cnt].first;
				ans += cb[cnt].first;
				j++;
			}
			i += j;
			cnt--;
		}else{
			for(ll j=i;j<=key;j++){
				ans += a[j];
			}
			break;
		}
	}
	cout << ans << endl;

}