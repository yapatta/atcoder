#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define All(a) (a).begin(),(a).end()
using namespace std;
constexpr int mod1 = 1e9+7, mod2 = 1e9+7;
constexpr int base1 = 1007, base2 = 2009;

int main() {
	int R, C, K;
	cin >> R >> C >> K;
	vector<vector<int>> S(R,vector<int>(C));
	for(int i=0;i<R;i++) {
		string tmp;
		cin >> tmp;
		for(int j=0;j<C;j++) {
			if(tmp[j] == 'o') S[i][j] = 1;
			else S[i][j] = 0;
		}
	}
	set<int> st1, st2;
	for(int x=K-1;x<=R-K;x++) {
		for(int y=K-1;y<=C-K;y++) {
			bool flag = true;
			for(int i=0;i<R;i++) {
				for(int j=0;j<C;j++) {
					if(abs(i-x) + abs(j-y) < K) {
						if(S[i][j] == 0)
							flag = false;
					}
				}
			}
			if(flag) {
				int hash1 = 0, hash2 = 0;

				for(int i=0;i<R;i++) {
					for(int j=0;j<C;j++) {
						if(abs(i-x) + abs(j-y) < K) {
							hash1 = (hash1 + base1 * (i*C+j)) % mod1;
							hash2 = (hash2 + base2 * (i*C+j)) % mod2;
						}
					}
				}
				if(!st1.count(hash1) and !st2.count(hash2)) {
					st1.insert(hash1);
					st2.insert(hash2);
				}
			}
		}
	}
	cout << st1.size() << endl;
}
