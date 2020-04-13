#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int A, B;
	cin >> A >> B;
	for(int n=1;n<=200000;n++) {
		int a = (n * 0.08) / 1;
		int b = (n * 0.1) / 1;
		if(a == A and b == B) {
			cout << n << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
