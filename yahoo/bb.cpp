#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
using namespace std;

int main(){
  int d[10];
  for (int i=1;i<=4;i++)d[i] = 0;
  for (int i=0;i<6;i++){
    int z;
    scanf("%d", &z);
    d[z]++;
  }
  if(d[1]<=2&&d[2]<=2&&d[3]<=2&&d[4]<=2) printf("YES\n");
  else printf("NO\n");
}
