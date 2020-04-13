#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll N;
	cin >> N;
	vector<ll> a(N);
	for(int i=0;i<N;i++)
		cin >> a[i];
	
	vector<ll> left(N+1), right(N+1);
	left[0] = 0;
	right[0] = 0;
	for(int i=0;i<N;i++)
	{
		left[i+1] = max(left[i], a[i]);
		right[i+1] = max(right[i] ,a[N-1-i]);
	}
	for(int i=0;i<N;i++)
	{
		cout << max(left[i], right[N-i-1]) << endl;
	}
}
