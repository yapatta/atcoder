#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define All(x) (x).begin(),(x).end()
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> l(N);
  rep(i,N){
    cin >> l[i];
  }
  sort(All(l));
  int sum=accumulate(All(l),0);
  int max=l[N-1];
  sum -= max;
  if(max<sum){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
