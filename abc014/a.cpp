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
  int a,b,tmp;
  cin >> a >> b;
  if(a%b==0) cout << 0 << endl;
  else{
    tmp=a/b;
    cout << (tmp+1)*b-a << endl;
  }
}
