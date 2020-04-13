#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> primes;
void eratos() {
	vector<bool> isPrime(2e5, true);
	for(ll i=2;i<=2e5;i++) {
		if(isPrime[i]) {
			for(int j=2*i;j<=2e5;j+=i)
				isPrime[j] = false;
		}
	}
	for(ll i=2;i<=2e5;i++)
		if(isPrime[i])
			primes.push_back(i);
}

int main(){
	ll X;
	cin >> X;
	eratos();
	cout << *lower_bound(primes.begin(), primes.end(), X) << endl;
}
