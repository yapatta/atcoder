#include <stdio.h>
#include <stdlib.h>

using namespace std;

int factorial(int n) {
	if (n == 1)
		return 1;
	return n*factorial(n-1);
}
int findMaximum(int A[], int l, int r) {
	int m = (l+r)/2;
	int u, v;
	if(l == r-1)
		return A[l];
	else {
		u = findMaximum(A, l, m);
		v = findMaximum(A, m, r);
	}
	return (u>v)?u:v;
}

int main() {
	int n; scanf("%d", &n);
	//配列を確保
	int *ptr;
	ptr = (int *)calloc(n, sizeof(int));
	for (int i = 0; i < n; ++i)
		scanf("%d", ptr+i);
	int x = findMaximum(ptr, 0, n);
	printf("%d\n", x);
	free(ptr);

	return 0;
}