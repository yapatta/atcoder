#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll INF = 1LL << 60;
const ll MOD = 998244353;
using namespace std;

ll mod_pow(ll a, ll n, ll p) {
	if (n == 0) return 1;
	if (n % 2 == 0) {
		ll tmp = mod_pow(a, n / 2, p);
		return (tmp * tmp) % p;
	}
	return (a * mod_pow(a, n - 1, p)) % p;
}
bool divisible(vector<ll> &f, ll p) {
	int N = f.size() - 1;
	for (int i = N; i >= p; i--) {
		ll t = f[i];
		f[i] = 0;
		(f[i - (p - 1)] += p - (p - 1)*t%p) %= p;
	}
	for (int i = 0; i < N; i++) if (f[i]) return 0;
	return 1;
}
ll gcd(ll a, ll b) {
	return b ? gcd(b, a % b) : a;
}
ll a[10001];
bool prime[10001];
int main() {
	int N;
	cin >> N;
	for (int i = N; i >= 0; i--) cin >> a[i];
	memset(prime, -1, sizeof(prime));
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= N; i++) {
		if (!prime[i]) continue;
		for (int j = i * 2; j <= N; j += i) prime[j] = 0;
	}
	vector<ll> f(N + 1);
	set<ll> ans;
	for (ll i = 2; i <= N; i++) {
		if (!prime[i]) continue;
		for (int j = 0; j <= N; j++) {
			f[j] = a[j];
			if (f[j] < 0) f[j] += (abs(f[j]) / i + 1)*i;
			f[j] %= i;
		}
		if (divisible(f, i)) {
			ans.insert(i);
		}
	}
	ll G = 0;
	for (int i = 0; i <= N; i++) {
		G = gcd(G, abs(a[i]));
	}
	for (ll i = 2; i*i <= G; i++) {
		if (G%i == 0) {
			ans.insert(i);
			while (G%i == 0) G /= i;
		}
	}
	if (G > 1) ans.insert(G);
	for (ll d : ans) {
		cout << d << endl;
	}
}
