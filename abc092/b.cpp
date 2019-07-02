#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 105
#define __TRUE "YES"
#define __FALSE "NO"
#define cout(x) cout << (x) << endl
#define reps(i,s,n) for(i=s;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;

int main() {
  int n,d,x;
  cin >> n >> d >> x;
  int count=0;
  for(int i=0;i<n;i++) {
    int a;
    cin >> a;
    int tmp=1,j=1;
    while(1) {
      if(tmp<=d) {
        tmp = j*a+1;
        j++;
        count++;
      }else break;
    }
  }
  cout(count+x);
  return 0;
}
