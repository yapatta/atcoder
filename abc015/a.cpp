#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
using namespace std;

int main(){
  string a,b;
  cin >> a >> b;
  if(a.size()>b.size()) cout << a << endl;
  else cout << b << endl;
}
