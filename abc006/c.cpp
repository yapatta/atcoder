#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;

int main(){
	int N, M;
	cin >> N >> M;
	for(int z=0;z<=N;z++) {
		int x = z + 3*N - M;
		int y = M - 2*N -2*z;
		if(0<=x and x<=N and 0<=y and y<=N) {
			cout << x << " " << y << " " << z << endl;
			return 0;
		}
	}
	cout << -1 << " " << -1 << " " << -1 << endl;
}
