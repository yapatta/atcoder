#include <stdio.h>
#include <stdlib.h>
#define LEN 100005
//enqueueとdequeue
//P型の構造体作成(文字列と数字)
typedef struct pp{
	char name[100];
	int t;
} P;

P Q[LEN];
int head, tail, n;

void enqueue(P x) {
	Q[tail] = x;
	tail = (tail+1) % LEN;
}
P dequeue() {
	P s = Q[head];
	head = (head+1) % LEN;
	return s;
}

int main(void) {
	int n, q;
	scanf("%d %d", &n, &q);
	for (int i = 1; i <= n; ++i)
		scanf("%s %d", Q[i].name, &Q[i].t);
	head = 1; tail = n+1;
	int elaps = 0;

	while(head != tail) {
		P x = dequeue();
		int c = (x.t<q)?x.t:q;
		elaps += c;
		x.t -= c;
		//まだ残っている
		if(x.t > 0) {
			enqueue(x);
		} else {
			printf("%s %d\n", x.name,elaps);
		}
	}

	return 0;
}