#include <cstdio>
#include <cstdlib>
int main() {
  int n;
  scanf("%d", &n);
  int* ch = (int*)malloc(sizeof(int)*n*2);
  for (int i = 0; i < n; i++) {
    scanf("%d", ch+i);
    ch[n+i] = i+1;
  }
  for (int i = 0; i < n-1; i++) {
    int max = ch[i], max_n = ch[n+i], max_i = i;
    for (int j = i+1; j < n; j++) {
      if(ch[j] > max) {
        max = ch[j];
        max_n = ch[n+j];
        max_i = j;
      }
    }
    int swap[2];
    swap[0] = ch[i];
    swap[1] = ch[n+i];
    ch[i] = max;
    ch[n+i] = max_n;
    ch[max_i] = swap[0];
    ch[n+max_i] = swap[1];
  }
  for (int i = 0; i < n; i++) {
    printf("%d\n", ch[n+i]);
  }
  return 0;
}
