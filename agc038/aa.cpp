#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define REPS(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define REP(i,n) reps(i,0,n)
#define REPTR(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define ALL(x) (x).begin(),(x).end()
#define MAX 1005
#define KEY 10007
using namespace std;

int main() {
	int h,w,a,b;
	cin >> h >> w >> a >> b;
	for(int i=0;i<h;i++) {
		if(i<b) {
			for(int j=0;j<w;j++) {
				if(j<a) cout << "1";
				else cout << "0";
			}
		}else {
			for(int j=0;j<w;j++) {
				if(j<a) cout << "0";
				else cout << "1";
			}
		}
		cout << endl;
	}
}
