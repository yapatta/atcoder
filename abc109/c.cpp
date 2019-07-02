#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
#include <limits>
#include <type_traits>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int i,n,x;
  cin >> n >> x;
  vector<int> X;
  for(i=0;i<n;i++) {
    int tmp;
    cin >> tmp;
    X.push_back(tmp);
  }
  if(X.size()==1) {
    cout << abs(X[0]-x) << endl;
    return 0;
  }
  int xgcd=abs(X[0]-X[1]);
  //配列Xすべての最大公約数を求める
  for(i=0;i < X.size()-1;i++) {
    xgcd = gcd<int,int>(xgcd, abs(X[i]-X[i+1]) );
  }
  //gcdが一番大きくなるxから最初に移るXの座標
  int max=1;
  for(i=0;i<n;i++) {
    int t = gcd<int,int>(xgcd, abs(X[i]-x) );
    if(t>max) {
      max=t;
    }
  }
  cout << max << endl;
  return 0;
}
