#include <iostream>
#define N 21
#define Q 201
using namespace std;
int a[N], n;
bool solve(int i, int m);
int main(void) {
	int q, m[Q];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", a+i);

	scanf("%d", &q);
	for (int i = 0; i < q; i++)
		scanf("%d", m+i);

	for (int i = 0; i < q; i++) {
		if(solve(0, m[i])) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}
bool solve(int i, int m) {
	if(m == 0) return true;
	if(i >= n) return false;
	return (solve(i+1, m) ||	solve(i+1, m-a[i]));
}
