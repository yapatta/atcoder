#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> r(N);
  rep(i,N) {
    cin >> r[i];
  }
  sort(r.begin(),r.end());
  int sum=0;
  for(int i=0;i<N;i++) {
    if(i%2==0) {
      sum+=(r[N-1-i]*r[N-1-i]);
    }else{
      sum-=(r[N-1-i]*r[N-1-i]);
    }
  }
  printf("%.6f\n",sum*M_PI);
}
