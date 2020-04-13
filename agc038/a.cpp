#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define ALL(x) (x).begin(),(x).end()
#define MAX 1005
#define KEY 10007
using namespace std;

int gcd(int a, int b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}

int H, W, A, B;
int main() {
	cin >> H >> W >> A >> B;
	if(H==1) {
		for(int i=0;i<A;i++) cout << "0";
		for(int i=0;i<W-A;i++) cout << "1";
		cout << endl;
		return 0;
	}else if(W==1) {
		for(int i=0;i<B;i++) cout << "0";
		for(int i=0;i<H-B;i++) cout << "1";
		cout << endl;
		return 0;
	}
	if(A==0 or B==0) {
		if(A==0 and B==0) {
			for(int i=0;i<H;i++) {
				for(int j=0;j<W;j++) {
					cout << "0";
				}
				cout << endl;
			}
			return 0;
		}else {
			cout << "No" << endl;
			return 0;
		}
	}

	if(H*A == W*B) {
		/* この条件は除外されている
		if(H==B and W==A) {
			cout << "No" << endl;
			return 0;
		}
		*/
		vector<bool> flag(W,false);
		vector<bool> nxflag(W,false);
		for(int j=0;j<A;j++) flag[j]= true;
		for(int j=A;j<W;j++) flag[j]= false;
		for(int i=0;i<H;i++) {
			for(int j=0;j<W;j++) {
				if(flag[j]) cout << "1";
				else cout << "0";
			}
			cout << endl;
			for(int j=0;j<W;j++) {
				nxflag[(j+A)%W] = flag[j];
			}
			for(int j=0;j<W;j++) {
				flag[j] = nxflag[j];
			}
		}
	}else {
		cout << "No" << endl;
	}
}
