#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;
constexpr int MAX = 1e6;

int main(){
	int n;
	cin >> n;
	vector<int> imos(MAX+1, 0);
	for(int i=0;i<n;i++) {
		int a, b;
		cin >> a >> b;
		imos[a]++;
		imos[b+1]--;
	}
	int ans = 0;
	for(int i=1;i<=MAX;i++) {
		imos[i] += imos[i-1];
	}
	for(int i=0;i<=MAX;i++) {
		ans = max(ans, imos[i]);
	}
	cout << ans << endl;
}
