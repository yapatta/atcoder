#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;

int main(){
  ll k,a,b;
  ll max,min;
  cin >> k >> a >> b;
  if(k<=a){
    cout << k+1 << endl;
    return 0;
  }
  if(b-a<=1){
    cout << k+1 << endl;
    return 0;
  }
  ll sum = a;
  ll num = a-1;
  ll syo = (k-num)/2;
  ll ama = (k-num)%2;
  sum = sum+syo*(b-a);
  sum+=ama;
  cout << sum << endl;
}
