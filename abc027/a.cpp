#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int main() {
  int x,y,z;
  cin >> x >> y >> z;
  if(x==y) {
    cout << z << endl;
  }else if(y==z) {
    cout << x << endl;
  }else{
    cout << y << endl;
  }
}
