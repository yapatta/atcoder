#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int A, B, M;
	cin >> A >> B >> M;
	vector<int> a(A), b(B);
	for(int i=0;i<A;i++) cin >> a[i];
	for(int i=0;i<B;i++) cin >> b[i];
	vector<int> val;
	for(int i=0;i<M;i++) {
		int x, y, c;
		cin >> x >> y >> c;
		x--, y--;
		val.push_back(a[x] + b[y] - c);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	val.push_back(a[0] + b[0]);
	sort(val.begin(),val.end());
	cout << val[0] << endl;
}
